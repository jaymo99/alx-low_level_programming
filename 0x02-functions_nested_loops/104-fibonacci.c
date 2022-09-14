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
	long int i = 0;

	printf("%ld, %ld, ", a, b);
	for (i = 0; i < 96; i++)
	{
		fibValue = a + b;
		printf("%ld", fibValue);

		/* if its NOT the last item */
		if (i < 95)
		{
			printf(", ");
		}

		a = b;
		b = fibValue;

	}
	printf("\n");
	return (0);
}
