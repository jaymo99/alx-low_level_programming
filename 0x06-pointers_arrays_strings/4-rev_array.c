#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to integer array (first item)
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int swapArea = 0;

	j = n - 1;
	for (i = 0; i < (n / 2); i++)
	{
		swapArea = a[i];
		a[i] = a[j];
		a[j] = swapArea;

		j--;
	}

}
