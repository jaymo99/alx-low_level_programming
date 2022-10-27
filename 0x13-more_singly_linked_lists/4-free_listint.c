#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: first node of the list
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}
