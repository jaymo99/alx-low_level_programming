#include <stdio.h>
#include <stdlib.h>

int pick_coin(int a);
/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0, for success
 * 1, if number of arguments passed is not exactly 1 (Error)
 */
int main(int argc, char *argv[])
{
	int counter = 0;

	int num;

	if (argc  != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	/* negative numbers */
	if (num < 0)
		printf("%d\n", 0);

	while (num > 0)
	{
		num = num - pick_coin(num);
		counter++;
	}

	printf("%d\n", counter);
	return (0);
}

/**
 * pick_coin - selects the highest value coin that can be used
 * @a: amount of money
 *
 * Return: the value of the selected coin
 */
int pick_coin(int a)
{
	if (a >= 25)
	{
		return (25);
	}
	else if (a >= 10)
	{
		return (10);
	}
	else if (a >= 5)
	{
		return (5);
	}
	else if (a >= 2)
	{
		return (2);
	}
	else if (a >= 1)
	{
		return (1);
	}

	return (0);
}
