#include "main.h"
#include <stdlib.h>

void _print(char *str);
int only_digits(char *argv[]);
void _print_num(unsigned long num);
/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	unsigned long num1, num2, prod;

	/* it is mandatory to pass in 2 arguments */
	if (argc != 3)
	{
		_print("Error\n");
		exit(98);
	}

	/* the arguments passed should only be composed of digits */
	if (!only_digits(argv))
	{
		_print("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	_print_num(prod);
	_putchar('\n');
	return (0);
}

/**
 * _print - prints characters (used in place of printf)
 * @str: string of characters to print
 */
void _print(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}


/**
 * _print_num - prints numbers
 * @num: number to print
 */
void _print_num(unsigned long num)
{
	if (num > 10)
	{
		_print_num (num / 10);
	}

	_putchar(num % 10 + '0');
}
/**
 * only_digits - checks if the first 2 arguments are all digits
 * @argv: argument vector
 *
 * Return: 1 if all characters are digits
 * 0 otherwise
 */
int only_digits(char *argv[])
{
	int i, num;

	/* for two arguments */
	for (i = 1; i < 3; i++)
	{
		num = atoi(argv[i]);

		/* detect non-digits */
		if (num == 0 && *argv[i] != '0')
		{
			return (0);
		}
	}

	return (1);
}
