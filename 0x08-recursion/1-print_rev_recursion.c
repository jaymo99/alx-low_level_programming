#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * display_string - prints all characters in a string (in reverse)
 * @s: string to print
 * @len: length of the string
 */
void display_string(char *s, int len)
{
	if (len == 0)
		return;
	_putchar(*(s + (len - 1)));
	len--;

	display_string(s, len);
}

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 */
void _print_rev_recursion(char *s)
{
	int len = strlen(s);

	display_string(s, len);

}
