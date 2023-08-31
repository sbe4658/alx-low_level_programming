#include "main.h"
/**
 * get_bit - get the bit at a given index.
 * @n: the number to get the from.
 * @index: index.
 *
 * Return: 1 or 0, otherwise -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0)
		return (0);
	for (i = 0; i < index; i++)
	{
		n >>= 1;
		if (n == 0)
			return (-1);
	}
	return (n & 1);
}
