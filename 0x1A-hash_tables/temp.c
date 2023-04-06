#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 *
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table
 * OR NULL if something went wrong.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_node_t **array;
	hash_table_t *ht;

	if (size < 1)
	{
		return (NULL);
	}

	array = calloc(size, sizeof(hash_node_t *));
	ht = malloc(sizeof(hash_table_t));

	if (ht == NULL || array == NULL)
	{
		return (NULL);
	}

	ht->size = size;
	ht->array = array;
	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}	
	return (ht);
}
