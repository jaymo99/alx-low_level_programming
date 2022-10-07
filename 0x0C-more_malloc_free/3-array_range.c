#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum number
 * @max: maximum number
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;

	/* size of array */
	int size = (max - min) + 1;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
