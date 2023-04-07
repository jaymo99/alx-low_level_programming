#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_set - adds an element to a hash table
 *
 * @ht: the hash table you want to add or update the key/value to.
 * @key: the key. (cannot be an empty string)
 * @value: the value associated with the key. (can be an empty string)
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	if (ht == NULL || key == NULL || strlen(key) < 1 ||
			ht->size < 1 || ht->array == NULL)
	{
		return (0);
	}

	index = key_index((unsigned char *)key, ht->size);
	node = key_exists(ht->array[index], key);
	if (node)
	{
		update_node_value(node, value);
		return (1);
	}

	node = hash_node_create(key, value);
	if (node)
	{
		if (ht->array[index] == NULL)
		{
			ht->array[index] = node;
		}
		else
		{
			node->next = ht->array[index];
			ht->array[index] = node;
		}
		return (1);
	}
	return (0);
}

/**
 * key_exists - finds a key in a key/value linked list
 *
 * @head: first node of the linked list.
 * @key: the key to look for.
 *
 * Return: the node containing the key
 * OR NULL if key doesn't exist
 */
hash_node_t *key_exists(hash_node_t *head, const char *key)
{
	if (head && key && strlen(key) > 0)
	{
		while (head != NULL)
		{
			if (strcmp(key, head->key) == 0)
			{
				return (head);
			}
			head = head->next;
		}
	}
	return (NULL);
}

/**
 * update_node_value - updates the value of a hash node
 *
 * @node: the hash node to update value
 * @value: the new value
 */
void update_node_value(hash_node_t *node, const char *value)
{
	size_t len = 1;
	char *new_value;

	if (value)
	{
		len = strlen(value) + 1;
	}

	new_value = malloc(sizeof(char) * len);
	if (new_value && node)
	{
		if (value == NULL)
		{
			strcpy(new_value, "");
		}
		else
		{
			strcpy(new_value, value);
		}

		free(node->value);
		node->value = new_value;
	}
}

/**
 * hash_node_create - creates a node with key/value set
 *
 * @key: the key
 * @value: the value associated with the key.
 *
 * Return: the created node
 * OR NULL on failure.
 */
hash_node_t *hash_node_create(const char *key, const char *value)
{
	size_t key_len = strlen(key) + 1;
	size_t value_len = 1;
	hash_node_t *node;

	if (value)
	{
		value_len = strlen(value) + 1;
	}

	node = malloc(sizeof(hash_node_t));
	if (node)
	{
		node->key = malloc(sizeof(char) * key_len);
		node->value = malloc(sizeof(char) * value_len);

		if (node->key == NULL || node->value == NULL)
		{
			fprintf(stderr, "malloc failed\n");
			exit(EXIT_FAILURE);
		}

		if (value == NULL)
		{
			strcpy(node->value, "");
		}
		else
		{
			strcpy(node->value, value);
		}

		strcpy(node->key, key);
		node->next = NULL;
	}
	return (node);
}
