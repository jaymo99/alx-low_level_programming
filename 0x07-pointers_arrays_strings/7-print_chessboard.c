#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to first element (0,0)
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (i = 0; i < 8; i++)
	{
		j = 0;
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
