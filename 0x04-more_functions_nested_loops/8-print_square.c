#include "main.h"
/**
 * print_square - prints a square.
 * @size: size of the square.
 *
 * Return: Nothing.
 */

void print_square(int size)
{
	int n, m;

	if (size > 0)
	{
		n = 0;
		while (n < size)
		{
			m = 0;
			while (m < size)
			{
				_putchar('#');
				m++;
			}
			_putchar('\n');
			n++;
		}
	}
	else
		_putchar('\n');
}
