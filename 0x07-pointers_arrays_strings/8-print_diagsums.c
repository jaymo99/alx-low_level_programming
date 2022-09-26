#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers.
 * @a: pointer to the first element of the matrix
 * @size: size of the square
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = size + 1, sum = *a, sum2 = *(a + size - 1);

	for (i = 0; i < size - 1; i++)
	{
		sum += *(a + j);
		j += size + 1;
	}


	j = 2 * (size - 1);

	for (i = 0; i < size - 1; i++)
	{
		sum2 += *(a + j);
		j += size - 1;
	}

	printf("%d, %d\n", sum, sum2);
}
