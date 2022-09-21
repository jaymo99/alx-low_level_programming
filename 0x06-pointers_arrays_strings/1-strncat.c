#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Description: this function will use at most @n bytes from @src.
 * @src does not need to be null-terminated if it containes @n or more bytes.
 *
 * Return: a pointer to the resulting string 'dest'
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_len = strlen(dest); /* length of dest */

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);

}
