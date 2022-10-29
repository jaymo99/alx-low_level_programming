#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 *
 * @head: address of pointer to first node.
 *
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	/* pointers of type listint_t */
	listint_t  *preceding_node = NULL, *temp = NULL;

	if (head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		preceding_node = *head;
		*head = (*head)->next;
		preceding_node->next = temp;
		temp = preceding_node;
	}

	*head = temp;
	return (*head);
}
