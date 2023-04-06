#include <string.h>
#include <stddef.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 *
 * @ht: hash table
 * @key: key to look for
 *
 * Return: the value associated with the element.
 * OR: NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *node = NULL;

	if (key == NULL || ht == NULL)
	{
		return (NULL);
	}

	idx = key_index((unsigned char *)key, ht->size);
	node = ht->array[idx];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
