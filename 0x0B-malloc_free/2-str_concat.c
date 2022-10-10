#include "main.h"
#include <string.h>
#include <stdlib.h>

/* function prototype */
void find_len(char *s1, char *s2, int *ptr);

/**
 * str_concat - concatenates two strings
 * @s1: pointer to string one
 * @s2: pointer to string two
 *
 * Return: pointer to a newly allocated space containing s1,
 * and s2.
 * OR: NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, new_len, i = 0, j = 0, counter = 0;
	/* array to hold length of s1, s2 and new string */
	int all_len[3];
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	find_len(s1, s2, all_len);
	len1 = all_len[0];
	len2 = all_len[1];
	new_len = all_len[2];

	ptr = malloc(sizeof(char) * new_len);
	if (ptr == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		for (i = 0; i < len1; i++)
		{
			*(ptr + counter) = *(s1 + i);
			counter++;
		}
	}

	if (s2 != NULL)
	{
		for (; j < len2; j++)
		{
			*(ptr + counter) = *(s2 + j);
			counter++;
		}
	}

	*(ptr + counter) = '\0';
	return (ptr);
}

/**
 * find_len - determines the length of the new string
 * @s1: pointer to string one
 * @s2: pointer to string two
 * @ptr: pointer to the first element of an int array.
 *
 * Description: this functions assigns values of the lengths
 * of s1, s2, and the new string to the array pointed to by
 * @ptr.
 */
void find_len(char *s1, char *s2, int *ptr)
{
	int len1, len2, new_len;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = strlen(s1);

	if (s2 == NULL)
		len2 = 0;
	else
		len2 = strlen(s2);

	new_len = len1 + len2 + 1;
	ptr[0] = len1;
	ptr[1] = len2;
	ptr[2] = new_len;
}
