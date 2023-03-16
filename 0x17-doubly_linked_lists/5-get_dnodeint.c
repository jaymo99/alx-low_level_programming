#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a dlistint_t linked list
 *
 * @head: head of the list
 * @index: the index of the node, starting from 0
 *
 * Return: the node at @index, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
		{
			return (head);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}
