#include <stdio.h>

/**
 * main - entry for the c program
 * Return: 0 for success
 */
int main(void)
{
	char my_char;

	for (my_char = 'a'; my_char <= 'z'; my_char++)
		putchar(my_char);
	putchar('\n');
	return (0);
}
