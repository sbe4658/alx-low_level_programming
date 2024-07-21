#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: the size of the array.
 *
 * Return: a pointer to the created hash table.
 */
hash_table_t *hash_table_create(unsigned int size)
{
	hash_table_t *new;
	unsigned int i = 0;

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (!new->array)
		return (NULL);
	for (; i < size; i++)
		new->array[i] = NULL;
	return (new);
}
