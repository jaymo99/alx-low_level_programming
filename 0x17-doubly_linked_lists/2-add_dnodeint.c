#include "lists.h"

/**
 * add_dnodeint - adds a new node at beginning of dlistint_t list
 *
 * @head: pointer to the head of list
 * @n: integer value for the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL)
	}


	return (new_node);
}
