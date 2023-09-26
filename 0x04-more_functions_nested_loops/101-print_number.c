#include "main.h"
/**
 * print_number - print an int type number.
 * @n: a given number.
 *
 * Return: Nothing.
 */
void print_number(int n)
{
	int s, dec = 1, tmp = 0;

	s = snum(n);
	if (n < 0)
		_putchar('-');
	if (n == 0)
		_putchar('0');
	for (; s; s--)
	{
		dec = indig(s - 1);
		tmp = n / dec;
		_putchar((tmp < 0 ? -tmp : tmp) + '0');
		n %= dec;
	}
}
/**
 * indig - computes the place order of decimal number.
 * @i: the place wanted.
 *
 * Return: A 10 mul, that resemble the place-order.
 */
int indig(int i)
{
	int dec = 1;

	while (i >= 1)
	{
		dec *= 10;
		i--;
	}
	return (dec);
}
/**
 * snum - computes the number of digits in a decimal number.
 * @n: a given number.
 *
 * Return: The number of digits.
 */
int snum(int n)
{
	int size = 0;

	if (n)
	{
		while (n)
		{
			n /= 10;
			size++;
		}
	}
	return (size);
}
