#include "main.h"
/**
 * print_binary - prints a decimal number in binary.
 * @n: a given number.
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = 0;

	if (n == 0)
		_putchar('0');
	else
	{
		while (n != 0)
		{
			m = n % 2;
			_putchar(m + '0');
			n /= 2;
		}
	}
}
