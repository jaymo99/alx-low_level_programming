#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: the input string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i, len = strlen(str);

	for (i = 0; i < len; i++)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
