#include "main.h"
/**
 * print_most_numbers - prints from 0 - 9 expect 2 and 4.
 *
 * Return: Nothing.
 */
void print_most_numbers(void)
{
	int n = 48;

	while (n <= 57)
	{
		if (n != 50 && n != 52)
			_putchar(n);
		n++;
	}
	_putchar('\n');
}
