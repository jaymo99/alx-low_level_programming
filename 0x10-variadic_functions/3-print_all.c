#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

int check_format(char c);
/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list params;

	va_start(params, format);

	while (format[i] != '\0')
	{
		if (check_format(format[i]) == 1)
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(params, int));
					break;

				case 'i':
					printf("%d", va_arg(params, int));
					break;

				case 'f':
					printf("%f", va_arg(params, double));
					break;

				case 's':
					printf("%s", va_arg(params, char *));
					break;
			}

			/* separator */
			switch (format[i + 1])
			{
				case ('\0'):
					break;
				default:
					printf(", ");
			}
		}

		i++;
	}
	va_end(params);
	printf("\n");
}

/**
 * check_format - examines if a character is a valid format specifier
 * @c: character to examine
 *
 * Return: 1, if @c is a valid format specifier.
 * 0, otherwise.
 */
int check_format(char c)
{
	/* char, int, float, string */
	char *specifiers = "cifs";
	int i = 0;

	while (specifiers[i] != '\0')
	{
		if (c == specifiers[i])
			return (1);
		i++;
	}

	return (0);
}
