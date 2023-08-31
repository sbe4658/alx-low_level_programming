#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int.
 * @b: a pointer to a string.
 *
 * Return: the converted number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int res = 0;

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		res = res * 2 + (b[i] - '0');
	}
	return (res);
}
