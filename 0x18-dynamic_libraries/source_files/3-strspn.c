#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be examined
 * @accept: string containing characters to match
 *
 * Return: number of bytes in the initial segment of @s
 * which consist only of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, len = 0;
	int matchFound = 0; /* boolean value (false) */

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				matchFound = 1; /* boolean value (true) */
				len++;
				break;
			}

			j++;
		}

		/* No match found */
		if (matchFound == 0)
		{
			break;
		}

		matchFound = 0;
		i++;
	}

	return (len);
}
