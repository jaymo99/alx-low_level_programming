#include "main.h"

/**
 * jack_bauer - prints minutes from '00:00' to '23:59'
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i = 0, j;

	for (i = 0; i <= 23; i++)
	{
		j = 0;

		for (j = 0; j <= 59; j++)
		{
			if (i < 10)
			{
				_putchar('0');
				_putchar(i + '0');
			}
			else
			{
				/* Remove the last digit and recur */
				print_all_digits(i);
			}

			_putchar(':');

			if (j < 10)
			{
				_putchar('0');
				_putchar(j + '0');
			}
			else
			{
				print_all_digits(j);
			}
			_putchar('\n');
		}
	}
}

/**
 * print_all_digits - prints all the digits in a given integer
 * @i: The integer whose digits will be printed
 *
 * Return: void
 */
void print_all_digits(int i)
{
	if (i / 10)
		print_all_digits(i / 10);

	/* Print the last digit */
	_putchar(i % 10 + '0');
}
