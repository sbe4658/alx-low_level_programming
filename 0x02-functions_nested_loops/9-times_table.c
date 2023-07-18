#include "main.h"
/**
  * time_table - prints the 9 times table
  *
  * Return: Nothing.
  */
void times_table(void)
{
	int n, m, nm;

	n = 0;
	while (n <= 9)
	{
		m = 0;
		while (m <= 9)
		{
			nm = n * m;
			if (nm >= 10)
			{
				_putchar((nm / 10) + 48);
				_putchar((nm % 10) + 48);
			}
			else
				_putchar(n + 48);
			if (m != 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(',');
			}
			m++;
		}
		_putchar('\n');
		n++;
	}
}
