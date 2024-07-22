#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table.
 *
 * Return: Nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int idx = 0;
	hash_node_t *node, *tmp;

	for (; idx < ht->size; idx++)
	{
		node = ht->array[idx];
		while (node)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
