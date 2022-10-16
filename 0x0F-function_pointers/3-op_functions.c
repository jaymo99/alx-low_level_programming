#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - computes the sum of two integers.
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the sum of @a and @b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - computes the difference of two integers.
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the difference between @a and @b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers.
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result of the multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides one integer with another.
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result of @a/@b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - computes the remainder of @a divided by @b
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the remainder.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
