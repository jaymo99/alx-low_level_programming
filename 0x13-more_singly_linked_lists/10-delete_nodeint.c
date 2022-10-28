#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node from a listint_t list.
 * @head: address of pointer to head.
 * @index: position of the node to delete.
 *
 * Return: on success, 1
 * on failure, -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *node_d;
	listint_t *preceding = NULL;

	if (head == NULL)
		return (-1);

	node_d = *head;
	while (count < index)
	{
		if (node_d == NULL)
			return (-1);

		preceding = node_d;
		node_d = node_d->next;
		count++;
	}

	if (node_d == NULL)
		return (-1);

	if (preceding == NULL)
		*head = node_d->next;
	else
		preceding->next = node_d->next;

	free(node_d);
	return (1);
}
