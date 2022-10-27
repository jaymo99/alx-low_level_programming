#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list.
 * @head: head node
 * @index: index of the target node.
 *
 * Return: the target node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
		count++;
	}

	return (head);
}
