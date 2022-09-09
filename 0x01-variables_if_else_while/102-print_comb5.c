#include <stdio.h>

/**
 * main - entry point for the c program
 * Return: 0 for success
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 100; a++)
	{
		for (b = 0; b < 100; b++)
		{
			if (a < b)
			{
				putchar(((a / 10) % 10) + '0');
				putchar((a % 10) + '0');

				putchar(' ');

				putchar(((b / 10) % 10) + '0');
				putchar((b % 10) + '0');

				if ((a == 98) && (b == 99))
					continue;
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
