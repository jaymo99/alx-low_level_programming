#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 *
 * Return: pointer to encoded string
 */
char *rot13(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		/* lowercase alphabet */
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] -= 96;
			str[i] += 13;
			str[i] %= 26;
			str[i] += 96;
		}
	}

	return (str);
}
