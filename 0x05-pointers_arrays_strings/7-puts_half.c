#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: the input string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i, n;

	if ((len) % 2 != 0)
	{
		n = (len - 1) / 2;
	}
	else
		n = len / 2;

	for (i = n; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
