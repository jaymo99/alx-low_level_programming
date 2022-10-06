#include "main.h"
#include <string.h>
#include <stdlib.h>

unsigned int concat_len(int len1, int len2, int n);
unsigned int get_len(char *str);

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes to use from s2
 *
 * Return: a pointer that points to a newly allocated space
 * in memroy, which contains s1, followed by the first n bytes
 * of s2, and null terminated.
 *
 * NULL, if function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i, counter = 0, len1, len2, new_len;

	len1 = get_len(s1);
	len2 = get_len(s2);
	new_len = concat_len(len1, len2, n);

	if (n >= len2)
		n = len2;

	/* allocate memory for concatenated string */
	new_str = malloc(new_len * sizeof(char));

	if (new_str == NULL)
		exit(98);

	for (i = 0; i < len1; i++)
	{
		*(new_str + counter) = *(s1 + i);
		counter++;
	}

	for (i = 0; i < n; i++)
	{
		*(new_str + counter) = *(s2 + i);
		counter++;
	}

	*(new_str + counter) = '\0';
	return (new_str);
}

/**
 * get_len - get length of string
 * @str: string
 *
 * Return: length of @str
 */
unsigned int get_len(char *str)
{
	unsigned int len;

	if (str == NULL)
		len = 0;
	else
	{
		len = strlen(str);
	}

	return (len);
}

/**
 * concat_len - computes length of concatenated string
 * @len1: length of string one
 * @len2: length of string two
 * @n: number of bytes to use from s2
 *
 * Return: length of concatenated string.
 */
unsigned int concat_len(int len1, int len2, int n)
{
	unsigned int new_len;

	/* length of concatenated string */
	if (n >= len2)
	{
		new_len = len1 + len2 + 1;
	}
	else
		new_len = len1 + n + 1;

	return (new_len);
}


