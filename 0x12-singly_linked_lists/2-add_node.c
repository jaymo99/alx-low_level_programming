#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node - adds a new node at the beginning of a linked list.
 * @head: pointer to head
 * @str: string to be added as data in a node.
 *
 * Return: the address of the new element.
 * on failure, NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		free(new_node);
		exit(1);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		exit(1);
	}
	new_node->len = strlen(new_node->str);
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
