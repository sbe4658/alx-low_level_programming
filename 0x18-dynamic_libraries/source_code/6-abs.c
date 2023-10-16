#include "main.h"
/**
  * _abs - computes the absolute value of a number.
  * @n: the number to be computed.
  *
  * Return: returns the abs value of n.
  */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (n * (-1));
	else
		return (0);
}
