#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: the hash table you want to add or update key/value
 * @key: the key (cannot be an empty string)
 * @value: the value associated with the key (can be an empty str)
 *
 * Return: 1 on success
 * 0 otherwise
 *
 * NOTE: In case of collision, new node is added at the beginning
 * of the list
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* Create new hash_node and populate values */
	hash_node_t *node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (0);
	}

	/* Get index of the key */

	/* Check for collision */

	/* Insert key at the given index */
}
