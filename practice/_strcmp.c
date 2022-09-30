#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[] = "James";
	char s2[] = "Mwaura";

	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", strcmp(s2, s1));
	printf("%d\n", strcmp(s1, s1));

	return (0);
}
