#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - creates a 2D array of integers
 * @width: width of the 2D matrix
 * @height: height of the 2D matrix
 *
 * Return: - a pointer to the 2D array of integers.
 */
int **alloc_grid(int width, int height)
{
	int i, size;
	int *grid;

	if (width < 1 || height < 1)
		return (NULL);

	size = width * height;

	grid = malloc(size * sizeof(int));
	if (grid == NULL)
		return (NULL);

	/* initialize each element to 0 */
	for (i = 0; i < size; i++)
	{
		grid[i] = 0;
	}

	return (grid);
}

int main(void)
{
	int *grid = alloc_grid(4, 4);
	printf("grid: %p\n", (void *)grid);
	
	return (0);
}
