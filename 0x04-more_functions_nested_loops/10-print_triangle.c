#include "main.h"

/**
 * print_triangle - prints a trianlge, followed by a new line
 * @size: the size of the trianlge
 *
 * Return: void
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i = 0, j = 0, blankSpaces = size - 1;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < blankSpaces; j++)
			{
				_putchar(' ');
			}

			for (j = 0; j < i + 1; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
			blankSpaces--;
		}
	}
	else
		_putchar('\n');
}
