#include <stddef.h>
#include <string.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to examine
 * @needle: string to be located
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, temp = 0;
	char *ptr;

	ptr = NULL;

	while (haystack[i] != '\0')
	{
		if (strlen(needle) == 0)
		{
			ptr = haystack;
			break;
		}

		j = 0;
		if (haystack[i] == needle[j])
		{
			ptr = &haystack[i];
			temp = i;
			while (needle[j] != '\0')
			{
				if (haystack[i] != needle[j])
				{
					ptr = NULL;
					i = temp;
					break;
				}

				i++;
				j++;
			}
		}

		i++;
	}

	return (ptr);
}
