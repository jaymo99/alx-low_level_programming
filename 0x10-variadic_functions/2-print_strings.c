#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: to be printed between strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list params;

	va_start(params, n);
	if (n > 0)
	{
		str = va_arg(params, char *);
		if (str == NULL)
			str = "(nil)";

		/* first string */
		printf("%s", str);

		for (i = 0; i < n - 1; i++)
		{
			str = va_arg(params, char *);
			if (str == NULL)
				continue;

			if (separator != NULL)
				printf("%s", separator);

			printf("%s", str);
		}

		printf("\n");
	}
	va_end(params);
}
