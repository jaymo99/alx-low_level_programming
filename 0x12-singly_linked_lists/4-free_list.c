#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * @head: start of the list.
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head->str);
		free_list(head->next);
	}

	free(head);
}
