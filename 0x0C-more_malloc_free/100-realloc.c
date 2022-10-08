#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size of the allocated space to ptr
 * @new_size: new size of the new memory block
 *
 * Return: a pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int min_size;
	void *new_mem;

	/* minimum between old and new sizes */
	if (old_size < new_size)
		min_size = old_size;
	else
		min_size = new_size;

	new_mem = malloc(new_size);
	if (new_mem == NULL)
		return (NULL);

	if (ptr == NULL)
		return (new_mem);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	free(ptr);

	/* copy the contents into new memory */
	return (memcpy(new_mem, ptr, min_size));
}
