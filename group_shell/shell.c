#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

/**
 * main - super simple shell that can run commands with their full
 * path, without any argument.
 *
 * @ac: argument count.
 * @av: argument vector.
 * @env: environment list.
 *
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
	int status;
	char *line, *file_path;
	words_n wrds;
	pid_t child_pid;

	line = init_shell();

	wrds = split_str(line);
	check_builtins(wrds.array[0]);

	file_path = get_file_path(wrds.array[0]);
	if (file_path == NULL)
		printf("command '%s' not found\n", wrds.array[0]);
	else
	{
		child_pid = fork();

		if (child_pid == 0)
		{
			if (execve(file_path, wrds.array, env) == -1)
			{
				perror(av[0]);
				exit(EXIT_FAILURE);
			}
		}
		wait(&status);
	}
	free(line);
	free(wrds.array);
	main(ac, av, env);

	return (0);
}

/**
 * init_shell - initializes a simple unix shell.
 *
 * Return: line/string of commands typed on the shell.
 */
char *init_shell(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t line_size;

	printf("#cisfun$ ");
	line_size = getline(&line, &len, stdin);
	if (line_size < 0)
	{
		free(line);
		exit(EXIT_FAILURE);
	}

	/**
	 * get rid of the \n character at the end
	 * NOTE: the string will then have 2 terminating null bytes
	 */
	line[line_size - 1] = '\0';
	return (line);
}
