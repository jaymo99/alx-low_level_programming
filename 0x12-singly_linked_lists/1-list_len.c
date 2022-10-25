#include "lists.h"

/**
 * list_len - counts the number of elements in a linked list.
 * @h: pointer to list object.
 *
 * Return: the number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);

	if (h->next != NULL)
		count += list_len(h->next);

	return (count);
}
