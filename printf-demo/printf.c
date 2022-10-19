#include "main.h"
#include <stdio.h>

/**
 * _printf - imitates the printf function in c
 * @format: the string to be printed
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, printed_char = 0;

	while (format[i] != '\0')
	{
		_putchar(format[i]);
		i++;
		printed_char++;
	}

	_putchar('\n');
	
	return (printed_char);
}

int main(void)
{
	_printf("hello");

	return (0);
}
