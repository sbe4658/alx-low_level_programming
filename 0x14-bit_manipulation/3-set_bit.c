#include "main.h"
/**
 * set_bit - set a bit to 1 at a given index.
 * @n: a pointer to a number.
 * @index: the position of the bit to be set to 1.
 *
 * Return: 1 for success, otherwise -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
