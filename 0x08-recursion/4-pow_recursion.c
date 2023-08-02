#include "main.h"
/**
 * _pow_recursion - computes x to the power of y.
 * @x: the base.
 * @y: the exponent.
 *
 * Return: The results, otherwise -1.
 */
int _pow_recursion(int x, int y)
{
	int result = 1;

	if (y > 0)
	{
		y--;
		result = x * _pow_recursion(x, y);
	}
	else if (y < 0)
		return (-1);
	return (result);
}
