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
	long int result = 0;
	long int i = 0;

	printf("%ld, %ld, ", a, b);
	for (i = 0; i < 48; i++)
	{
		result = a + b;
		printf("%ld", result);

		/* if its NOT the last item */
		if (i < 47)
		{
			printf(", ");
		}

		a = b;
		b = result;

	}
	printf("\n");
	return (0);
}
