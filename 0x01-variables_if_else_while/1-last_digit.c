#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point for the program
 * Return: 0 for success
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;
	printf("Last digit of %d is ", n);

	if (lastDigit > 5)
		printf("%d and is greater than 5\n", lastDigit);
	if (lastDigit == 0)
		printf("%d and is 0\n", lastDigit);
	if (lastDigit < 6 && lastDigit != 0)
	       printf("%d and is less than 6 and not 0\n", lastDigit);
	return (0);
}
