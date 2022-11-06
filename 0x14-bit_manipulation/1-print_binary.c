#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: decimal number.
 */
void print_binary(unsigned long int n)
{
	unsigned long int ans = n, rem = 0;

	/* divide by two */
	ans = n >> 1;
	rem = n - (ans * 2);

	if (ans == 1)
	{
		/* ascii value */
		_putchar(ans + 48);
	}
	else if (ans > 1)
		print_binary(ans);

	_putchar(rem + 48);
}
