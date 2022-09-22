#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase letters
 * @str: pointer to string
 *
 * Return: pointer to uppercase string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		/* ascii values from 97 to 122 */
		if (str[i] > 96 && str[i] < 123)
			str[i] -= 32;
		i++;
	}

	return (str);
}
