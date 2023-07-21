#include "main.h"
/**
 * print_triangle - draws a triangle.
 * @n: number of horizontal line.
 *
 * Return: Nothing.
 */

void print_triangle(int n)
{
	int m, s, c;

	if (n > 0)
	{
		c = n - 1;
		m = 0;
		while (m < n)
		{
			s = 0;
			while (s < n)
			{
				if (s < c)
					_putchar(' ');
				else
					_putchar('#');
				s++;
			}
			_putchar('\n');
			m++;
			c--;
		}
	}
	else
		_putchar('\n');
}
