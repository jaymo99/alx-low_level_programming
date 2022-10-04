#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: a pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int len = 0;
	int *ptr;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	len = sizeof(int *) * height + sizeof(int) * width * height;
	arr = (int **) malloc(len);
	if (arr == NULL)
		return (NULL);

	ptr = (int *)(arr + height);

	for (i = 0; i < height; i++)
	{
		arr[i] = (ptr + width * i);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}


	return (arr);
}
