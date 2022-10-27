#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: address of the pointer to head.
 * @idx: index position where node is inserted.
 * @n: integer value to store as data
 *
 * Return: address of the new node.
 * on failure, NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *temp;
	listint_t *new_node;
	listint_t *shift = NULL;

	if (head == NULL)
		return (NULL);

	temp = *head;
	while (count < idx)
	{
		if (temp == NULL)
			return (NULL);

		if (count == idx - 1)
			break;

		temp = temp->next;
		count++;
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* check if there is currently a node at index idx */
	if (temp->next != NULL)
		shift = temp->next;

	temp->next = new_node;
	new_node->n = n;
	new_node->next = shift;

	return (new_node);
}
