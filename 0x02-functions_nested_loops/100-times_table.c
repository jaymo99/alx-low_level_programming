#include "main.h"

/**
 * print_times_table - prints the @n times table, starting with 0
 * @n: The number whose times table is printed
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i = 0;
	int j = 0;
	int product = 0;

	if ((n < 0) || (n > 15))
		return;

	for (i = 0; i <= n; i++)
	{

		for (j = 0; j <= n; j++)
		{
			product = i * j;

			if (j > 0)
				insert_spaces(product);

			print_all_digits(product);

			/* if NOT the last item in a row*/
			if (j != n)
			{
				_putchar(',');
			}
		}

		_putchar('\n');

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

/**
 * insert_spaces - puts appropriate spaces depending on no of digits
 * @i: The integer to put space before
 *
 * Return: void
 */
void insert_spaces(int i)
{
	if ((i >= 0) && (i < 10))
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
	}
	else if (i < 100)
	{
		_putchar(' ');
		_putchar(' ');
	}
	else if (i < 1000)
	{
		_putchar(' ');
	}


}
