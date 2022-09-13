#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet ten times (lowercase)
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0, j;

	for (i = 0; i < 10; i++)
	{
		j = 97;

		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
