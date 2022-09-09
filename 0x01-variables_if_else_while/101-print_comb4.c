#include <stdio.h>

/**
 * main - entry point for the c program
 * Return: 0 for success
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				if ((a < b) && (b < c))
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');

					if ((a == 7) && (b == 8) && (c == 9))
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
