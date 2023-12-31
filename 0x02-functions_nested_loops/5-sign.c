#include "main.h"
/**
  * print_sign - prints the sign of a given number.
  * @n: the given number.
  *
  * Return: 1 if n > 0, -1 if n < 0, 0 if n = 0.
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
