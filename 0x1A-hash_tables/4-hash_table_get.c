#include "hash_tables.h"
#include <stddef.h>
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key.
 *
 * @ht: the hash table to look into.
 * @key: the key to look for.
 *
 * Return: the value associated with the element
 * OR NULL if the key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	if (ht && key && strlen(key) > 0)
	{
		index = key_index((unsigned char *)key, ht->size);
		node = key_exists(ht->array[index], key);
		if (node)
		{
			return (node->value);
		}
	}
	return (NULL);
}
