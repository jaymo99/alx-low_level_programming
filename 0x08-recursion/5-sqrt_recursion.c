#include "main.h"

/**
 * check_square - compares the square of a number against a
 * specified target integer.
 *
 * @x: - number to be squared
 * @n: - the targeted integer
 *
 * Return: @x if it turns out to be the square root of @n
 * OR -1, if theres is no matching square root
 */
int check_square(int x, int n)
{
	if ((x * x) == n)
		return (x);
	else if ((x * x) > n)
		return (-1);

	x++;
	return (check_square(x, n));
}

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: number to find sqr root
 *
 * Return: square root of @n
 * OR -1, if @n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	return (check_square(1, n));
}
