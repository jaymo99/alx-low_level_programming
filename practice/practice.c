#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char **func (char *str)
{
	char *p = strtok (str, " ");
	char **array;
	int i = 0;

	array = malloc(sizeof(char) * 50);

	while (p != NULL)
	{
		array[i++] = p;
		p = strtok (NULL, " ");
	}

	return (array);
}

int main(void)
{
	char **array;
	char *str;
	int i = 0;

	str = malloc(sizeof(char) * 30);

	strcpy(str, "one two three four five six");

	array = func(str);

	for (i = 0; i < 6; ++i) 
		printf("%s\n", array[i]);

	return (0);
}

