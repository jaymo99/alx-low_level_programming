#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int fibValue = 0;
	/* To incorporate the value of b right at the start */
	long int sum = b;

	while (fibValue <= 4000000)
	{
		fibValue = a + b;
		if (fibValue % 2 == 0)
		{
			sum += fibValue;
		}

		a = b;
		b = fibValue;
	}

	printf("%ld\n", sum);
	return (0);
}

