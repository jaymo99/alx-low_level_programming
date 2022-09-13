#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: The integer to be examined
 *
 * Return: The value of the last digit
 */
int print_last_digit(int i)
{
	if (i < 0)
	{
		i = i * -1;
	}

	do {
		i = i % 10;
	} while (i > 10);

	_putchar(i + '0');
	return (i);
}
