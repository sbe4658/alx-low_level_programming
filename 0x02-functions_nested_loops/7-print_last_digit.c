#include "main.h"
/**
  * print_last_digit - gets the last digit of a number.
  * @n: a given number.
  *
  * Return: the last digit of n.
  */
int print_last_digit(int n)
{
	int lDIGIT;

	if (n < 0)
		n = n * (-1);
	lDIGIT = n % 10;
	_putchar(lDIGIT + 48);
	return (lDIGIT);
}
