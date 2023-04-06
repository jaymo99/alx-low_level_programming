#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	/* free all key/value pairs */
	/* free all hash_nodes */
	/* free hash table */

	unsigned long int i = 0;

	if (ht != NULL)
	{
		while (i < ht->size)
		{
			if (ht->array[i] != NULL)
			{
				delete_node_list(ht->array[i]);
			}

			i++;
		}

		free(ht->array);
		free(ht);
	}
}

/**
 * delete_node_list - deletes a linked list of hash nodes.
 *
 * @head: first node of hash node linked list
 */
void delete_node_list(hash_node_t *head)
{
	if (head->next != NULL)
	{
		delete_node_list(head->next);
	}
	free(head->key);
	free(head->value);
	free(head);
}
