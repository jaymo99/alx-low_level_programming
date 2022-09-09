#include <stdio.h>

/**
 * main - entry point for the c program
 * Return: 0 for success
 */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
		putchar(c + '0');
	putchar('\n');

	return (0);
}
