#include "main.h"
#include <string.h>

/**
 * check_match - checks if a string matches its reverse
 * @a: pointer to first character
 * @b: pointer to last character
 *
 * Return: 1, if the string matches its reverse
 * 0, otherwise.
 */
int check_match(char *a, char *b)
{
	/* NOTE 'a' and 'b' are pointers */
	/* if they point to the same location... */
	if (a == b)
		return (1);

	if (a > b)
		return (1);

	if (*a == *b)
		return (check_match(a + 1, b - 1));

	return (0);
}

/**
 * is_palindrome - checks if a string reads the same
 * backwards as forwards (palindrome)
 *
 * @s: pointer to the string
 *
 * Return: 1, if the string is a palindrome.
 * 0, otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (check_match(s, s + (len - 1)));
}
