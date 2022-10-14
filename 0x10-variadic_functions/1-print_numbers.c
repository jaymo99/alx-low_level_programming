#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list params;

	va_start(params, n);

	if (n > 0)
	{
		/* first number */
		printf("%d", va_arg(params, int));

		for (i = 0; i < (int)n - 1; i++)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
			printf("%d", va_arg(params, int));
		}
		printf("\n");
	}

	va_end(params);
}
