#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: a pointer to the resulting string 'dest'
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;
	int isEndOfDest = 0; /* boolean false */
	int isEndOfSrc = 0; /* boolean false */

	while (isEndOfDest == 0)
	{
		if (*(dest + i) == '\0')
		{
			isEndOfDest = 1; /* boolean true */

			while (isEndOfSrc == 0)
			{
				if (*(src + j) == '\0')
					isEndOfSrc = 1; /* boolean true */

				*(dest + i) = *(src + j);
				i++;
				j++;
			}
		}
		else
			i++;
	}

	return (dest);
}
