#include "hash_tables.h"
/**
 * key_index - spits out an index where the key/value should be stored.
 * @key: string.
 * @size: the size of the array or the hash table.
 *
 * Return: the index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
