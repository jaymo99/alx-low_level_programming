#include <stdio.h>

/**
 * main - entry point for the c program
 * Return: 0 for success
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (a < b)
			{
				putchar(a + '0');
				putchar(b + '0');

				if ((a == 8) && (b == 9))
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
