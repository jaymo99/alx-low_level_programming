#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @i: The integer to be computed
 *
 * Return: The absolute value of the integer input
 */
int _abs(int i)
{
	if (i < 0)
		return (i * -1);
	else
		return (i);
}
