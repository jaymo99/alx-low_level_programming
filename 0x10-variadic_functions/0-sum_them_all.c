#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - computes the sum of all its parameters
 * @n: number of parameters excluding @n
 *
 * Return: the sum of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list params;

	va_start(params, n);
	for (i = 0; i < (int)n; i++)
	{
		sum += va_arg(params, int);
	}

	return (sum);
}
