#include "function_pointers.h"

/**
 * array_iterator - executes a callback on each element of an
 * array
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to the callback function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}