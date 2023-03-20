#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the string pointed by 'src'
 * @dest: destination
 * @src: source
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int counter = 0;

	while (*(src + counter) != '\0')
	{
		*(dest + counter) = *(src + counter);
		counter++;
	}
	*(dest + counter) = '\0';

	return (dest);
}
