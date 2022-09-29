#include "main.h"

char *next_match(char *a, char b);

/**
 * wildcmp - compares two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Description: string 2 can contain a wildcard character '*'
 * The special character '*' chan replace any
 * string (including an empty string)
 *
 * Return: 1, if the strings can be considered identical.
 * 0, otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	/* if both strings are at the end */
	if (*s1 == *s2 && *s1 == '\0')
		return (1);

	if (*s1 == '\0' && *s2 != '\0')
		return (0);
	else if (*s2 == '\0' && *s1 != '\0')
		return (0);

	if (*s2 == '*')
	{
		char *ptr = next_match(s1, *(s2 + 1));

		return (wildcmp(ptr, s2 + 1));

	}

	if (*s1 != *s2)
		return (0);

	return (wildcmp(s1 + 1, s2 + 1));
}

/**
 * next_match - finds the address of a character that matches
 * a given search criteria
 *
 * @a: pointer to string
 * @b: character to search for
 *
 * Return: pointer to the identified match.
 * OR pointer @a, if there's no match found
 */
char *next_match(char *a, char b)
{
	if (*a == '\0')
		return (a);

	if (*a == b)
		return (a);

	if (b == '*')
		return (a);

	return (next_match(a + 1, b));
}
