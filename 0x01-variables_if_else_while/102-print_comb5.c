#include <stdio.h>
/**
  * main - prints all possible combos of two two-digits.
  *
  * Return: 0 -> Success
  */
int main(void)
{
	int n, m, h, e;

	e = h = n = 48;
	while (m <= 57 && n <= 57 && h < 56 && e <= 57)
	{
		m++;
		putchar(e);
		putchar(h);
		putchar(' ');
		putchar(n);
		putchar(m);
		if (m == 57 && n == 57 && h == 56 && e == 57)
		{
			putchar(',');
			putchar(' ');
		}
		if (m == 57)
		{
			if (n == 57)
			{
				if (h == 57)
				{
					m = n = h = e;
					e++;
				}
				else
				{
					m = n = h;
					h++;
				}
			}
			else
			{
				m = n;
				n++;
			}
		}
	}
	putchar('\n');
	return (0);
}
