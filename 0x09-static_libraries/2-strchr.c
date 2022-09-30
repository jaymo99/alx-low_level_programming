#include <stddef.h>
#include <string.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to examine
 * @c: character to locate
 *
 * Return: a pointer to the first occurrence of @c
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int len = strlen(s);

	/* len + 1 searches even the nul byte terminator */
	for (i = 0; i < len + 1; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (NULL);
}
