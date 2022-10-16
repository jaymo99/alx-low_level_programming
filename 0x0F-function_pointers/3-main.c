#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count.
 * @argv: argument vector.
 * Return: always 0 (success).
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	res = get_op_func(argv[2])(num1, num2);

	printf("%d\n", res);

	return (0);
}
