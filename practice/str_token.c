#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * split_str - splits a string into words
 *
 * @src: the string to be split
 *
 * Return: a linked list containing each word of the string.
 */
word_t *split_str(char *src)
{
	const char del[6] = " ";
	size_t len;
	char *str,
		 *token;
	/* pointer to list of words */
	word_t *head = NULL;

	if (src == NULL)
	{
		fprintf(stderr, "argument cannot be NULL\n");
		exit(EXIT_FAILURE);
	}

	len = strlen(src);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		fprintf(stderr, "malloc failed\n");
		free(str);
		exit(EXIT_FAILURE);
	}

	strcpy(str, src);
	/* get the first token */
	token = strtok(str, del);

	/* walk through other tokens */
	while (token != NULL)
	{
		/* add token to list */
		add_node_end(&head, token);
		token = strtok(NULL, del);
	}
	free(str);
	return (head);
}

int main(void)
{
	word_t *head;

	head = split_str("One Two Three Four Five.");
	print_list(head);
	free_list(head);

	return (0);
}
