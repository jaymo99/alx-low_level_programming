#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - looks for files in the current PATH.
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Usage: ./which filename ...
 * Description: prints the full path of the file.
 *
 * Return: on success, 0
 * on failure, -1
 */
int main(int ac, char **av)
{
	int st;
	size_t len = 0;
	char *env_path = NULL,
		 *file_path,
		 *str,
		 *token;
	struct stat statbuf;

	if (ac < 2)
	{
		printf("Usage: %s file ...\n", av[0]);
		return (1);
	}

	env_path = getenv("PATH");
	if (env_path == NULL)
	{
		printf("PATH cannot be NULL\n");
		exit(EXIT_FAILURE);
	}

	/* length of path string */
	len = strlen(env_path);

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		printf("malloc failed allocating str\n");
		exit(EXIT_FAILURE);
	}
	/* copy path */
	strcpy(str, env_path);

	/* string tokens */
	token = strtok(str, ":");
	while (token != NULL)
	{
		file_path = malloc(strlen(token) + strlen(av[1]) + 1);
		if (file_path == NULL)
		{
			printf("malloc failed allocating file_path\n");
			exit(EXIT_FAILURE);
		}
		strcpy(file_path, token);
		strcat(file_path, "/");
		strcat(file_path, av[1]);

		st = stat(file_path, &statbuf);
		if (st == 0)
		{
			printf("%s\n", file_path);
			return (0);
		}
		
		token = strtok(NULL, ":");
	}

	return (-1);
}
