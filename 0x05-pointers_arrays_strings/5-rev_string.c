#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: the input string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}

	_putchar('\n');
}
