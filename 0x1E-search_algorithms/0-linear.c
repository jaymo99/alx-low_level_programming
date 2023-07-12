#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - find a value in an array using linear search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in @array.
 * @value: the value to look for in @array.
 * Return: the first index where @value is located.
 * or -1 if value is not present or array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	int idx = 0;
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		if (value == array[idx])
		{
			return (idx);
		}
		idx++;
	}
	return (-1);
}
