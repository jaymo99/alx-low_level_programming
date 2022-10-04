#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer to string one
 * @s2: pointer to string two
 *
 * Return: pointer to a newly allocated space containing s1,
 * and s2.
 * OR: NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{

	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int new_len = len1 + len2 + 1;
	int i = 0, j = 0, counter = 0;
	char *ptr = malloc(sizeof(char) * new_len);

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		*(ptr + counter) = *(s1 + i);
		counter++;
	}

	for (; j <= len2; j++)
	{
		*(ptr + counter) = *(s2 + j);
		counter++;
	}

	return (ptr);
}
