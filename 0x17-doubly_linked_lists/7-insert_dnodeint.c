#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: double pointer to head of the list
 * @idx: the index of the list where the new node should be added.
 * @n: integer value stored in new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 1;
	dlistint_t *node = *h;
	dlistint_t *new_node = NULL;
	dlistint_t *next = NULL;

	if (h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	while (node)
	{
		if (i == idx)
		{
			next = node->next;
			node->next = new_node;
			new_node->prev = node;
			new_node->next = next;
			new_node->n = n;
			return (new_node);
		}
		i++;
		node = node->next;
	}
	free(new_node);
	return (NULL);

}
