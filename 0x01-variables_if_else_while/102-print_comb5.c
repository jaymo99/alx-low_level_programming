#include <stdio.h>

/**
 * main - entry point for the c program
 * Return: 0 for success
 */
int main(void)
{
	for (int a = 0; a < 100; a++)
	{
		for (int b = 0; b < 100; b++)
		{
			if (a < b)
			{
				if (a < 10)
				{
					putchar('0');
					putchar(a + '0');
				}
				else
				{
					putchar(((a / 10) % 10) + '0');
					putchar((a % 10) + '0');
				}
				putchar(' ');

				if (b < 10)
				{
					putchar('0');
					putchar(b + '0');
				}
				else
				{
					putchar(((b / 10) % 10) + '0');
					putchar((b % 10) + '0');
				}
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
