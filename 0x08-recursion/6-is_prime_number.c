#include "main.h"

/**
 * check_divisibility - checks if a number is divisible by
 * another number
 *
 * @a: number to be examined
 * @b: divisor
 *
 * Return: the number it is divisible with
 */
int check_divisibility(int a, int b)
{
	/* negative numbers cannot be prime */
	if (a < 0)
		return (0);
	/* 1 is not a prime number */
	if (a == 1)
		return (0);

	if (a == b)
		return (b);

	if (a % b == 0)
		return (b);

	b++;
	return (check_divisibility(a, b));

}

/**
 * is_prime_number - checks if the input integer is a prime number
 * @n: The input integer
 *
 * Return: 1, if the input integer is a prime number.
 * 0, otherwise
 */
int is_prime_number(int n)
{
	int res = check_divisibility(n, 2);

	/* divisible by a number other than itself */
	if (res !=  n)
		return (0);

	return (1);
}
