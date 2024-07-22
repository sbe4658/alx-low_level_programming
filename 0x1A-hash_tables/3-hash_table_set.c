#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table, a fixed size array.
 * @key: string.
 * @value: value pair with key.
 *
 * Return: On success 1; otherwise 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index = 0;
	hash_node_t *new, **position;

	if (!key || !ht)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	position = &(ht->array[index]);
	if (*position)
	{
		if (strcmp((*position)->key, key) == 0)
		{
			(*position)->value = strdup(value);
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	new->next = *position;
	*position = new;
	return (1);
}
