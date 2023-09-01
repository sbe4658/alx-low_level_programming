#include "main.h"
/**
 * flip_bits - computes the number of needed to get from m to n.
 * @n: first number.
 * @m: second number.
 *
 * Return: return the number of flips needed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flips = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) ^ (m & 1))
			flips++;
		n >>= 1;
		m >>= 1;
	}
	return (flips);
}
