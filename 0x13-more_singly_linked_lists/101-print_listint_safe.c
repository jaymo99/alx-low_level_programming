#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list.
 *
 * @head: pointer to first node.
 *
 * Description: This function can print lists with a loop.
 * It goes through the list only once.
 *
 * Return: on success, the number of nodes in the list.
 * on failure, exit the program with status (98).
 */
size_t print_listint_safe(const listint_t *head)
{
	/* list of addresses */
	list_addr *addresses = NULL;
	listint_t *temp = NULL;
	size_t count = 0;
	int status;

	if (head == NULL)
		return (count);

	/* add to the list of addresses */
	add_node_addr(&addresses, (void *)head);

	printf("[%p] %d\n", (void *)head, head->n);
	temp = head->next;
	count++;

	while (temp != NULL)
	{
		/* status 1, TRUE */
		status = find_addr(addresses, temp);
		if (status == 1)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			break;
		}

		/* add to the list of addresses */
		add_node_addr(&addresses, temp);

		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
		count++;
	}

	free_list_addr(addresses);
	return (count);
}

/**
 * add_node_addr - adds a node at the beginning of a list_addr list.
 * @head: address of pointer to head.
 * @addr: address of a listint_t node.
 *
 * Return: the address of the new element.
 * on failure, NULL.
 */
list_addr *add_node_addr(list_addr **head, listint_t *addr)
{
	list_addr *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_addr));
	if (new_node == NULL)
		exit(98);

	new_node->addr = addr;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

/**
 * free_list_addr - frees a list_addr linked list.
 * @head: pointer to head.
 */
void free_list_addr(list_addr *head)
{
	if (head->next != NULL)
		free_list_addr(head->next);

	free(head);
}

/**
 * find_addr - looks for an address is in a list_addr list.
 * @head: first node of the list.
 * @addr: address of a listint_t node.
 *
 * Return: 1, if address is found.
 * 0, otherwise.
 */
int find_addr(list_addr *head, const listint_t *addr)
{
	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		if (head->addr == addr)
			return (1);
		head = head->next;
	}

	return (0);
}
