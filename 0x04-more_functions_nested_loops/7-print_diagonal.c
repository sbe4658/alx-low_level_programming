#include "main.h"
/**
 * print_diagonal - draws a diagonal line.
 * @n: number of horizontal line.
 *
 * Return: Nothing.
 */

void print_diagonal(int n)
{
	int m, s;

	if (n > 0)
	{
		m = 0;
		while (m < n)
		{
			s = 0;
			while (s < n)
			{
				if (m == s)
				{
					_putchar('\\');
					break;
				}
				else
					_putchar(' ');
				s++;
			}
			_putchar('\n');
			m++;
		}
	}
	else
		_putchar('\n');
}
