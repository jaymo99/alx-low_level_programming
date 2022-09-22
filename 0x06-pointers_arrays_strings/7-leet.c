#include "main.h"
#include <string.h>

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 *
 * Return: pointer to encoded string
 */
char *leet(char *str)
{
	int i, j;
	int len = strlen(str);
	char alphabets[] = {'A', 'E', 'O', 'T', 'L'};
	char numerics[] = {52, 51, 48, 55, 49};

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == alphabets[j] || str[i] == alphabets[j + 32])
				str[i] = numerics[j];
		}
	}

	return (str);
}
