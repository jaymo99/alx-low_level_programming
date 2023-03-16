#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
    if (head != NULL)
    {
        free_dlistint(head->next);
    }
    free(head);
}
