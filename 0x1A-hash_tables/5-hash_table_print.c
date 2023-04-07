#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table.
 *
 * @ht: the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node = NULL;
	int counter = 0;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
		{
			continue;
		}
		node = ht->array[i];
		while (node)
		{
			if (counter > 0)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			counter++;
			node = node->next;
		}
	}
	printf("}\n");
}
