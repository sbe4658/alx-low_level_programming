#include "main.h"
/**
 * prin_line - print n straight lines.
 *
 * Return: Nothing.
 */

void print_line(int n)
{
	int m = 0;

	if (n > 0)
	{
		while (m <= n)
		{
			_putchar('_');
			m++;
		}
	}
	_putchar('\n');
}
