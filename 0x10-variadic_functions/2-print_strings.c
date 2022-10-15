#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: to be printed between strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;

	va_start(params, n);
	if (n > 0)
	{
		/* first string */
		printf("%s", va_arg(params, char *));

		for (i = 0; i < n - 1; i++)
		{
			printf("%s", separator);
			printf("%s", va_arg(params, char *));
		}

		printf("\n");
	}
}
