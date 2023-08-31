#include "main.h"
/**
 * print_binary - prints a decimal number in binary.
 * @n: a given number.
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
