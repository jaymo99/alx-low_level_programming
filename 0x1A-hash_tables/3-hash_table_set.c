#include <stdlib.h>
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
	hash_node_t *new_node = NULL;
	hash_node_t *collision_node = NULL;
	unsigned long int k_index;
	size_t buffer_size = 0;

	/* Create new hash_node and populate values */
	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		return (0);
	}

	buffer_size = strlen(key) + 1;
	new_node->key = malloc(sizeof(char) * buffer_size);
	if (new_node->key == NULL)
	{
		return (0);
	}

	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	new_node->next = NULL;

	/* Get index of the key */
	k_index = key_index((unsigned char *)new_node->key, ht->size);

	/* Insert key at the given index (check for collision) */
	if (ht->array[k_index] == NULL)
	{
		ht->array[k_index] = new_node;
	}
	else
	{
		collision_node = ht->array[k_index];
		new_node->next = collision_node;
		ht->array[k_index] = new_node;
	}

	return (1);
}
