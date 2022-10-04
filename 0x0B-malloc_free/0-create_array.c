#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * with a specific char
 *
 * @size: size of array
 * @c: character to initialize with
 *
 * Return: a pointer to the array,
 * OR NULL if it fails,
 * NULL if size = 0,
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));

	if (ptr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			*(ptr + i) = c;
		}
	}

	return (ptr);
}
