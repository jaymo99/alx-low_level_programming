#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - finds a value in a sorted array using binary search algo.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in @array.
 * @value: the value to search for.
 * Return: the index where @value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid = 0;
	size_t half_size = 0;
	int *sub_array = NULL;
	int idx = 0;

	if (array == NULL || size < 1)
	{
		return (-1);
	}
	printf("Searching in array: ");
	print_array(array, size);
	printf("\n");

	if (size > 1)
	{
		mid = (size / 2) + (size % 2) - 1;
	}

	if (value == array[mid])
	{
		return (mid);
	}
	else if (value < array[mid])
	{
		return (binary_search(array, mid, value));
	}

	half_size = (size - 1) - mid;
	sub_array = &array[mid + 1];
	idx = binary_search(sub_array, half_size, value);
	if (idx >= 0)
	{
		return (mid + idx + 1);
	}
	return (-1);
}

/**
 * print_array - prints all items in an int array, separated by commas.
 * @array: the integer array to be printed.
 * @size: the number of elements in the array.
 */
void print_array(int *array, size_t size)
{
	size_t idx = 0;

	while (idx < size)
	{
		printf("%d", array[idx]);
		if (idx < (size - 1))
		{
			printf(", ");
		}
		idx++;
	}
}
