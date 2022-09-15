#include "main.h"

/**
 * _islower - checks if a character is a lowercase alphabet
 * @c: The character to be checked
 *
 * Return: 1 if c is lowercase
 * 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}