#include "main.h"
#include <unistd.h>
#include <string.h>

unsigned int _pow(unsigned int base, unsigned int exponent);

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: a string of 0 and 1 chars.
 *
 * Return: on success, the converted number.
 * 0, if there is one or more chars in string b that is not 0
 * or 1.
 * 0, if b is NULL>
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0,
				 uint = 0,
				 temp = 0,
				 pow_val = 0;

	if (b == NULL)
		return (0);

	len = strlen(b);
	while (len > 0)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);

		/* 48 is ascii value for zero*/
		temp = (int)b[len - 1] - 48;
		if (temp == 0)
		{
			pow_val++;
			len--;
			continue;
		}
		uint += temp * _pow(2, pow_val);
		pow_val++;
		len--;
	}

	return (uint);
}

/**
 * print_digits - prints a number
 * @n: number to print.
 */
void print_digits(int n)
{
	if (n > 10)
		print_digits(n / 10);

	_putchar((n % 10) + '0');
}

/**
 * _pow - returns the value of a base raised to an exponent.
 *
 * @base: base number
 * @exponent: exponent value.
 *
 * Return: the result of base raised to power exponent.
 */
unsigned int _pow(unsigned int base, unsigned int exponent)
{
	unsigned int res = base;

	if (exponent == 0)
		return (1);

	while (exponent > 1)
	{
		res *= base;
		exponent--;
	}

	return (res);
}
