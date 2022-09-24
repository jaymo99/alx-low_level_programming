#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0, if the @s1 and @s2 are equal;
 * a negative value if s1 is less than s2;
 * a positive value if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, res = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && res == 0)
	{
		res = s1[i] - s2[i];
		i++;
	}

	return (res);
}
