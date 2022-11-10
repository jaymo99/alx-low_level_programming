#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/**
 * struct w_token - singly linked list of words.
 * @str: string - (malloc'ed string)
 * @next: points to the next node
 *
 * Description: singly linked list node structure.
 */
typedef struct word_t {
	char *str;
	struct word_t *next;
} word_t;

/* functions that manipulate the linked list */
word_t *add_node_end(word_t **head, const char *str);
void free_list(word_t *head);
size_t print_list(const word_t *h);

#endif /* MAIN_H */

