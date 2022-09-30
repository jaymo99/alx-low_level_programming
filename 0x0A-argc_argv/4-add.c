#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0, for success.
 * 1, if non-digits are detected
 */
int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	if (argc < 2)
		printf("%d\n", 0);

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		/* detect non-digits */
		if (num == 0 && *argv[i] != '0')
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
