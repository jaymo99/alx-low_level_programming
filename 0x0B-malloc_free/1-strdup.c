#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - creates a copy of a string
 * @str: pointer to the original string
 *
 * Return: a pointer to the newly allocated space in memory,
 * (which contains a copy of the string given as a parameter)
 * NULL if str = NULL
 * NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int i;
	char *ptr;
	int len = strlen(str);

	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		*(ptr + i) = *(str + i);
	}
	return (ptr);
}
