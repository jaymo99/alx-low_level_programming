#include "main.h"

void display_digits(int);
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 0, j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			display_digits(j);
		}
		_putchar('\n');
	}
}

/**
 * display_digits - prints all the digits in a number
 * @j: The integer to be printed
 *
 * Return: void
 */
void display_digits(int j)
{
	int k;

	if (j > 9)
	{
		k = j / 10;
		display_digits(k);
	}

	_putchar((j % 10) + '0');
}
