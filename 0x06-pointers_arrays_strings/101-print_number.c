#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int j;
	/* negative numbers */
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	if (n > 9)
	{
		j = n / 10;
		print_number(j);
	}

	_putchar((n % 10) + '0');
}
