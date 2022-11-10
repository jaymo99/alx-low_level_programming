#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t line_size;

	printf("$ ");
	line_size = getline(&line, &len, stdin);
	printf("You entered %s", line);
	free(line);

	return (0);
}
