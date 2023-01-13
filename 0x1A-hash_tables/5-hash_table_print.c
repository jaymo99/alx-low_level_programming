#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 *
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *h_node = NULL;
	int pair_count = 0;

	if (ht == NULL)
	{
		exit(EXIT_FAILURE);
	}

	putchar('{');

	while (i < (ht->size))
	{
		h_node = ht->array[i];

		if (h_node != NULL && h_node->key != NULL)
		{
			if (pair_count > 0)
			{
				printf(", ");
			}
			printf("'%s':", h_node->key);
			pair_count++;
		}

		if (h_node != NULL && h_node->value != NULL)
		{
			printf(" '%s'", h_node->value);
		}
		i++;
	}
	printf("}\n");
}
