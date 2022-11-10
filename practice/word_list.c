#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a word_t list.
 *
 * @head: word_t double pointer
 * @str: string to be added as data in the node.
 *
 * Return: on success, the address of the new element.
 * on failure, NULL.
 */
word_t *add_node_end(word_t **head, const char *str)
{
	word_t *new_node;
	word_t *last_node;

	last_node = *head;

	new_node = malloc(sizeof(word_t));
	if (new_node == NULL)
	{
		free(new_node);
		fprintf(stderr, "malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		fprintf(stderr, "strdup failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node;

	return (new_node);
}

/**
 * free_list - frees a word_t list.
 * @head: start of the list.
 */
void free_list(word_t *head)
{
	if (head != NULL)
	{
		free(head->str);
		free_list(head->next);
	}

	free(head);
}

/**
 * print_list - prints all the words in a word_t list.
 *
 * @h: pointer to word_t list.
 *
 * Return: the number of nodes.
 */
size_t print_list(const word_t *h)
{
	int counter = 1;

	if (h == NULL)
		return (0);

	if (h->str == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", h->str);

	if (h->next != NULL)
		counter += print_list(h->next);

	return (counter);
}
