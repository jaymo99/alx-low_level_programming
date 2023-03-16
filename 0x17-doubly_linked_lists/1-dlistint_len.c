#include "lists.h"

/**
 * dlistint_len - finds the number of elements in a dble linked list
 *
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	dlistint_t *node;

	if (h == NULL)
	{
		return (0);
	}

	len++;
	node = h->next;

	while (node)
	{
		len++;
		node = node->next;
	}

	return (len);
}
