#include "main.h"
/**
 * _isupper - checks wether c is uppercase.
 * @c: the charecter to check.
 *
 * Return: 1 if c is uppercase, otherwise 0.
 */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
