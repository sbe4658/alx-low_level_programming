#include "hash_tables.h"
/**
 * hash_table_get - retreves a value from a key.
 * @ht: hash table.
 * @key: the key.
 *
 * Return: the value associated with @key, otherwise NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *node;

	if (key && ht)
	{
		index = key_index((unsigned char *)key, ht->size);
		node = ht->array[index];
		if (node)
		{
			while (node)
			{
				if (strcmp(node->key, key) == 0)
					return (node->value);
				node = node->next;
			}
		}
	}
	return (NULL);
}
