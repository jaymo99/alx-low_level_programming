#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: the hash table you want to add or update key/value
 * @key: the key (cannot be an empty string)
 * @value: the value associated with the key (can be an empty str)
 *
 * Return: 1 on success
 * 0 otherwise
 *
 * NOTE: In case of collision, new node is added at the beginning
 * of the list
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	unsigned long int k_index;

	if (ht == NULL)
	{
		return (0);
	}

	/* Create new hash_node */
	new_node = hash_node_create(key, value);
	if (new_node == NULL)
	{
		return (0);
	}

	/* assign key/value to the new node */
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	new_node->next = NULL;

	/* Get index of the key */
	k_index = key_index((unsigned char *)new_node->key, ht->size);

	/* Insert key at the given index */
	insert_item(ht, k_index, new_node);
	return (1);
}

/**
 * insert_item - adds a key/value pair at an index in hash table
 *
 * @ht: hash table
 * @idx: index position in the hash table
 * @new_node: hash node containing key/value pair
 *
 * Return: Always 0, success
 */
int insert_item(hash_table_t *ht, unsigned int idx, hash_node_t *new_node)
{
	hash_node_t *head = NULL;

	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = new_node;
	}
	else
	{
		/* head of linked list */
		head = ht->array[idx];
		if (update_list(head, new_node->key, new_node->value))
		{
			/* free newly created node */
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			return (0);
		}
		else
		{
			new_node->next = head;
			ht->array[idx] = new_node;
		}
	}
	return (0);
}

/**
 * hash_node_create - creates a new node for a hash table
 *
 * @key: part of the key/value pair of a hash node
 *			key (cannot be an empty string)
 *
 * @value: the value associated with the key (can be an empty str)
 *
 * Return: pointer to the new node
 * OR: NULL on failure.
 */
hash_node_t *hash_node_create(const char *key, const char *value)
{
	size_t key_size = 0;
	size_t value_size = 0;
	hash_node_t *new_node = NULL;

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	/* allocate memory for key*/
	key_size = strlen(key) + 1;
	new_node->key = malloc(sizeof(char) * key_size);
	if (new_node->key == NULL)
	{
		/* malloc failure */
		return (NULL);
	}

	/* allocate memory for value*/
	value_size = strlen(value) + 1;
	new_node->value = malloc(sizeof(char) * value_size);
	if (new_node->value == NULL)
	{
		/* malloc failure */
		return (NULL);
	}

	return (new_node);
}

/**
 * update_list - updates the value attached to an existing
 * key in a hash_node list.
 *
 * (The list is at an index in a hash table. It is created
 *	when a collision occurs at that index)
 *
 * @head : first node of the linked list.
 *
 * @key: part of the key/value pair of a hash node
 *			key (cannot be an empty string)
 *
 * @value: the value associated with the key (can be an empty str)
 *
 * Return: 1 if key already exists and value has been changed.
 * 0 otherwise
 */
int update_list(hash_node_t *head, const char *key, const char *value)
{
	hash_node_t *node = head;
	size_t value_size = 0;

	/* check if key already exists and replace attached value*/
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			/* free old value */
			free(node->value);

			/* allocate memory for new value*/
			value_size = strlen(value) + 1;
			node->value = malloc(sizeof(char) * value_size);
			if (node->value == NULL)
			{
				/* malloc failure */
				return (0);
			}

			strcpy(node->value, value);
			return (1);
		}

		node = node->next;
	}
	return (0);
}
