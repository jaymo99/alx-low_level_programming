#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

/**
 * main - super simple shell that can run commands with their full
 * path, without any argument.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0, status;
	char *line = NULL;
	size_t len = 0;
	ssize_t line_size;
	words_n wrds;
	pid_t child_pid;

	printf("$ ");
	line_size = getline(&line, &len, stdin);
	if (line_size < 0)
	{
		perror("getline error:");
		free(line);
		exit(EXIT_FAILURE);
	}

	/**
	 * get rid of the \n character at the end
	 * NOTE: the string will then have 2 terminating null bytes
	 */
	line[line_size - 1] = '\0';

	wrds = split_str(line);
	child_pid = fork();

	if (child_pid == 0)
	{
		if (execve(wrds.array[0], wrds.array, NULL) == -1)
		{
			perror("Error executing command");
			exit(EXIT_FAILURE);
		}
	}
	wait(&status);
	free(line);
	free(wrds.array);

	main();
	return (0);
}
