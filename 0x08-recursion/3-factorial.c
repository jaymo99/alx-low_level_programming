#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: number to compute
 *
 * Return: the factorial of @n,
 * OR -1 if @n is lower than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
