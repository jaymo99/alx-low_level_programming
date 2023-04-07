#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * hash_table_delete - deletes a hash table.
 *
 * @ht: the hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			free_node_list(ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
}

/**
 * free_node_list - free up memory allocated for a linked list
 *
 * @head: first node of the list
 */
void free_node_list(hash_node_t *head)
{
	if (head->next)
	{
		free_node_list(head->next);
	}
	free(head->key);
	free(head->value);
	free(head);
}
