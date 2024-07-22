#include "hash_tables.h"
/**
 * hash_table_print - print a hash table.
 * @ht: a hash table.
 *
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int idx = 0, end = 0;
	hash_node_t *node, *exist;

	if (ht)
	{
		end = hash_table_end(ht);
		if (end == 0)
		{
			printf("{}\n");
			return;
		}
		putchar('{');
		for (; idx < ht->size; idx++)
		{
			node = ht->array[idx];
			exist = node;
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				if (node->next)
				{
					putchar(',');
					putchar(' ');
				}
				node = node->next;
			}
			if (exist && end != idx)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('}');
		putchar('\n');
	}
}

/**
 * hash_table_end - gets the ende of hash table.
 * @ht: hash table.
 *
 * Return: the index to the last stored key/value pair,
 * Otherwise 0.
 */
int hash_table_end(const hash_table_t *ht)
{
	unsigned int idx = 0, last = 0;
	hash_node_t *node;

	while (idx < ht->size)
	{
		node = ht->array[idx];
		if (node)
			last = idx;
		idx++;
	}
	return (last);
}
