#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - super simple shell that can run commands with their full
 * path, without any argument.
 *
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int i = 0;
	char *line = NULL;
    size_t len = 0;
    ssize_t line_size;

    printf("$ ");
    line_size = getline(&line, &len, stdin);
    printf("%s", line);
    free(line);


	while (av[i] != NULL)
	{
		printf("%s\n", av[i]);
		i++;
	}

	return (0);
}
