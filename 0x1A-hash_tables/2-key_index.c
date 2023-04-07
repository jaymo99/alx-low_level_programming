#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * key_index - determines the array index position of a key.
 *
 * @key: the key in a given key/value pair
 * @size: the size of the array of the hash table
 *
 * Return: the index at which the key/value pair should be stored in the
 * array of the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL)
	{
		fprintf(stderr, "hash key cannot be NULL");
		exit(EXIT_FAILURE);
	}

	if (size < 1)
	{
		fprintf(stderr, "hash table array size cannot be zero");
		exit(EXIT_FAILURE);
	}

	return (hash_djb2(key) % size);
}
