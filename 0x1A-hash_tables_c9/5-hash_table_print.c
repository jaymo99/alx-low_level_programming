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
	int pair_count = 0;

	if (ht == NULL)
	{
		exit(EXIT_FAILURE);
	}

	putchar('{');

	while (i < (ht->size))
	{
		print_node_list(ht->array[i], &pair_count);
		i++;
	}
	printf("}\n");
}

/**
 * print_node_list - prints elements of a hash_node linked list.
 * (list of collisions at an index in hash table array)
 *
 * @head: first node of linked list.
 * @pair_count: number of key/value pairs already printed
 */
void print_node_list(hash_node_t *head, int *pair_count)
{
	hash_node_t *h_node = head;

	while (h_node != NULL)
	{
		if (h_node->key != NULL)
		{
			if (*pair_count > 0)
			{
				printf(", ");
			}
			printf("'%s':", h_node->key);
			(*pair_count)++;
		}

		if (h_node->value != NULL)
		{
			printf(" '%s'", h_node->value);
		}
		h_node = h_node->next;
	}
}
