#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of array elements
 * @size: size of each element
 *
 * Return: a pointer to the allocated memory.
 * NULL, if @nmemb or @size is 0.
 * NULL, if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *str;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	/* set memory to zero */
	str = ptr;
	for (i = 0; i < nmemb * size; i++)
		str[i] = 0;

	return (ptr);
}
