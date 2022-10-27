#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: address of pointer to head.
 * @n: integer value to be added in new node.
 *
 * Return: the address of the new element.
 * on failure, NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	attach_tail(*head, new_node);
	return (new_node);
}

/**
 * attach_tail - identifies the tail node and attaches new node.
 *
 * @head: the first node.
 * @new_node: node to be attached at tail.
 */
void attach_tail(listint_t *head, listint_t *new_node)
{
	if (head->next == NULL)
	{
		head->next = new_node;
		return;
	}

	attach_tail(head->next, new_node);
}
