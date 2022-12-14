#include "main.h"


/**
 * _strlen - calculates the length of a string
 * @s: the string to be examined
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int strLength = 0;

	while (*(s + strLength) != '\0')
	{
		strLength++;
	}
	return (strLength);
}

