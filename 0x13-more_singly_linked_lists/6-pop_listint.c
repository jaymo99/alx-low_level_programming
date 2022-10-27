#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list.
 * @head: address of the pointer to head.
 *
 * Return: the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (head == NULL)
		exit(0);

	if (*head != NULL)
	{
		n = (*head)->n;
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	else
		exit(1);

	return (n);
}
