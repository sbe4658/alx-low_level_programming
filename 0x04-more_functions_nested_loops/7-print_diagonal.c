#include "main.h"
/**
 * print_diagonal - draws a diagonal line.
 * @n: number of diagonal lines.
 *
 *Return: Nothing.
 */

void print_diagonal(int n)
{
	int m = 0, s;

	if (n > 0)
	{
		while (m < n)
		{
			s = 0;
			while (s < n)
			{
				if (s == m)
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
