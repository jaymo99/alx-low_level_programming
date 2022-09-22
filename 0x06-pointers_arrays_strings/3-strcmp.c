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
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);
	int i, j, s1_value = 0, s2_value = 0;

	for (i = 0; i < s1_len; i++)
	{
		s1_value += s1[i];
	}

	for (j = 0; j < s2_len; j++)
	{
		s2_value += s2[j];
	}

	return (s1_value - s2_value);
}
