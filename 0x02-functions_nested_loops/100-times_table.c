#include "main.h"
/**
  * print_times_table - prints the n times table
  * @n: the number of times table.
  * Return: Nothing.
  */
void print_times_table(int n)
{
	int c = 0, m, nm;

	for (c = 0; c <= n && n < 15 && n >= 0; c++)
	{
		for (m = 0; m <= n; m++)
		{
			nm = c * m;
			if (m != 0)
			{
				if (nm >= 100)
					_putchar(' ');
				else if (nm >= 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}

			}
			if (nm >= 10)
			{
				if (nm >= 100)
					_putchar((nm / 100) + 48);
				_putchar(((nm % 100) / 10) + 48);
				_putchar((nm % 10) + 48);
			}
			else
			{
				_putchar(nm + 48);
			}
			if (m != n)
				_putchar(',');
		}
		_putchar('\n');
	}
}
