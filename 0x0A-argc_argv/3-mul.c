#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0, for success
 * 1, if program does not receive two arguments.
 */
int main(int argc, char *argv[])
{
	int prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	prod = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", prod);

	return (0);
}
