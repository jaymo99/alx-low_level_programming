#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse
 * @s: the string to be reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, len = strlen(s);

	for (i = len; i >= 0; i--)
	{
		_putchar(*(s + i));
	}

	_putchar('\n');
}
