#include "main.h"
/**
  * times_table - prints the 9 times table
  *
  * Return: Nothing.
  */
void times_table(void)
{
	int n, m, nm;

	n = 0;
	while (n <= 9)
	{
		while (m <= 9)
		{
			nm = n * m;
			if (nm >= 10)
			{
				_putchar((nm / 10) + 48);
				_putchar((nm % 10) + 48);
			}
			else
			{
				_putchar(nm + 48);
			}
			if (m != 9)
			{
				if (nm < 10)
				{
					if (n < 2)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
					else if (n >= 2 && nm < 8)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			m++;
		}
		m = 0;
		_putchar('\n');
		n++;
	}
}
