#ifndef HASH_TABLES_H
#define HASH_TABLES_H


/*---------------- DATA STRUCTURES --------------*/

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	 char *key;
	 char *value;
	 struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	 unsigned long int size;
	 hash_node_t **array;
} hash_table_t;



/*---------FUNCTION PROTOTYPES---------------*/

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
char *hash_table_get(const hash_table_t *ht, const char *key);

/* File: 3-hash_table_set.c */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
int insert_item(hash_table_t *ht, unsigned int idx, hash_node_t *new_node);
hash_node_t *hash_node_create(const char *key, const char *value);
int update_list(hash_node_t *head, const char *key, const char *value);

/* File: 4-hash_table_get.c */
char *hash_table_get(const hash_table_t *ht, const char *key);
void print_word(char *word);

/* File: 5-hash_table_print.c */
void hash_table_print(const hash_table_t *ht);
void print_node_list(hash_node_t *head, int *pair_count);

/* File: 6-hash_table_delete.c */
void hash_table_delete(hash_table_t *ht);
void delete_node_list(hash_node_t *head);


#endif /* HASH_TABLES_H */
