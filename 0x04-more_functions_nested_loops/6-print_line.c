#include "main.h"
/**
 * print_line - print n straight lines.
 * @n: number of lines '_'
 *
 * Return: Nothing.
 */

void print_line(int n)
{
	int m = 0;

	if (n > 0)
	{
		while (m < n)
		{
			_putchar('_');
			m++;
		}
	}
	_putchar('\n');
}
