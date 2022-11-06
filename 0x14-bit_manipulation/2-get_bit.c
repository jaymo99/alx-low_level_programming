#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 *
 * @n: decimal number
 * @index: the index of the bit, starting from 0
 *
 * Return: the value of the bit at index
 * on failure, -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m = 1 << index;

	if ((n & m) == 0)
		return (0);

	return (1);
}
