#include "main.h"
/**
 * _isdigit - checks if c is a digit.
 * @c: charecter to be checked.
 *
 * Return: 1 if c is digit, otherwise 0.
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	else
		return (0);
}
