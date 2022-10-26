#include "lists.h"

/**
 * listint_len - finds the length of a linked listint_t list.
 * @h: head
 *
 * Return: the number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);

	count += listint_len(h->next);
	return (count);
}
