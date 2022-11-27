#include <stdio.h>

int main(int ac, char **av)
{
	char *first, *second;

	first = "Hello";
	second = first;

	if (first == second)
		printf("The two are equal\n");
	else
		printf("They are NOT equal\n");

	return (0);
}
