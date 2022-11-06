#include "main.h"

/**
 * clear_bit - sets teh value of a bit to 0 at a given index.
 *
 * @n: pointer to integer value
 * @index: index, starting from 0 of the bit you want to set.
 *
 * Return: on success, 1
 * on failure, -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;
	unsigned int range = sizeof(long int) * 8;

	if (index >= range)
		return (-1);
	
	m = 1 << index;
	if ((*n | m) == *n)
	{
		*n = *n ^ m;
	}
	return (1);
}
