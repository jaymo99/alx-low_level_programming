#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 *
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num_nodes = 0;
	dlistint_t *node;

	if (h == NULL)
	{
		exit(1);
	}

	printf("%d\n", h->n);
	num_nodes++;
	node = h->next;

	while (node)
	{
		printf("%d\n", node->n);
		num_nodes++;
		node = node->next;
	}

	return (num_nodes);
}
