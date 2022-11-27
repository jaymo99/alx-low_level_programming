#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits needed to flip to get
 * from one number to another.
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to flip to get from @n to @m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned int count;

	diff = n ^ m;
	count = count_active_bits(diff);
	
	return (count);
}

/**
 * count_active_bits - counts the number of 1's in the binary
 * repesentation of a number.
 *
 * @n: the number to be examined.
 *
 * Return: the number of 1's in the binary representation of @n.
 */
unsigned int count_active_bits(unsigned long int n)
{
	unsigned long int ans = n, rem = 0;
	unsigned int count = 0;

	/* divide by two */
	ans = n >> 1;
	rem = n - (ans * 2);

	if (rem == 1)
		count++;

	if (ans == 1)
	{
		count++;
	}
	else if (ans > 1)
		count += count_active_bits(ans);


	return (count);
}
