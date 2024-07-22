#ifndef HASH_TABLE_H
#define HASH_TABLE_H
/* Headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Needed linked lists to implement a HashTable Data stucture. */
/**
 * struct hash_node_s - Node of a hash table.
 *
 * @key: The key, string.
 * The key is unique in the HashTable.
 * @value: The value corresponding to a key.
 * @next: A pointer the next node of the list.
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure.
 *
 * @size: The size of the array.
 * @array: An array of size @size.
 * Each cell of this array is a pointer ti the first node of a linked list.
 * because the current HashTable use a chaining collision handling.
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/* Functions */
hash_table_t *hash_table_create(unsigned int);
unsigned long int hash_djb2(const unsigned char *);
unsigned long int key_index(const unsigned char *, unsigned long int);
int hash_table_set(hash_table_t *, const char *, const char *);
char *hash_table_get(const hash_table_t *, const char *);
void hash_table_print(const hash_table_t *);
int hash_table_end(const hash_table_t *);

#endif
