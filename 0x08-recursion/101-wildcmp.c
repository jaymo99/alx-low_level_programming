#include "main.h"

int match_chars(char *a, char *b);
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
	return (match_chars(s1, s2));
}


/**
 * match_chars
 * @a:
 * @b:
 *
 * Return: 1, if the characters match.
 * 0, otherwise.
 */
int match_chars(char *a, char *b)
{
	/* if both strings are at the end */
	if (*a == *b && *a == '\0')
		return (1);

	if (*a == '\0' && *b != '\0')
		return (0);
	else if (*b == '\0' && *a != '\0')
		return (0);

	if (*b == '*')
	{
		char *ptr = next_match(a, *(b + 1));

		return (match_chars(ptr, b + 1));

	}

	if (*a != *b)
		return (0);

	return (match_chars(a + 1, b + 1));

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
