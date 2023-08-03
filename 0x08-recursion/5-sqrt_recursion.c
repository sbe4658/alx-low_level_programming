#include "main.h"
/**
 * _sqrt_recursion - computes the square root of given numeber.
 * @n: a given number.
 *
 * Return: results otherwise -1.
 */
int _sqrt_recursion(int n)
{
	int tmp = 0;

	if (tmp < n)
		tmp = n;
	if (n >= 0)
	{
		if (tmp == n * n)
			return (n);
		else
		{
			n--;
			_sqrt_recursion(n);
		}
	}
	else
		return (-1);
	return (n);
}
