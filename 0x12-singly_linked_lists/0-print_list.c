#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list.
 * @h: pointer to list_t.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int counter = 1;

	if(h->str == NULL)
		printf("[%d] (nil)\n", h->len);
	else
		printf("[%d] %s\n", h->len, h->str);
	
	if(h->next != NULL)
		counter += print_list(h->next);

	return (counter);
}

