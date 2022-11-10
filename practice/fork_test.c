#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

/**
 * main - fork + wait + execve exercise
 *
 * Description: executes the command 'ls -l /tmp' in 5 different
 * child processes. Each child is created by the same father.
 * It waits for a child to exit before creating a new child.
 *
 * Return: Always 0
 */
int main(void)
{
	char *argv[] = {"/usr/bin/ls", "-l", "/tmp", NULL};
	/* child pid */
	pid_t cpid;
	int status;
	int i;

	for (i = 1; i <= 5; i++)
	{
		cpid = fork();
		if (cpid == -1)
		{
			perror("Error calling fork!");
			exit(EXIT_FAILURE);
		}

		if (cpid == 0)
		{
			printf("(%d) This is child - %d\n", getpid(), i);
			printf("(%d) My parent is - %d\n", getpid(), getppid());
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error when calling execve\n");
				exit(EXIT_FAILURE);
			}
		}
		else
		{
			wait(&status);
			printf("\n\n");
		}
	}

	return (0);
}
