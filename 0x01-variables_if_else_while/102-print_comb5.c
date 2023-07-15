#include <stdio.h>
/**
  * main - prints a combination of two-digits number
  *
  * Return: 0 Always -> Success
  */
int main(void)
{
	int n, m, h, e;

	h = e = n = m = 48;
	while (m <= 57)
	{
		putchar(h);
		putchar(e);
		putchar(32);
		putchar(n);
		putchar(m);
		if (h != 57 && e != 56 && n != 57 && m != 57)
		{
			putchar(44);
			putchar(32);
		}
		if (m == 57)
		{
			if (n == 57)
			{
				if (e == 57)
				{
					h++;
					e = 48;
				}
				else
				{
					e++;
					n = e;
				}
			}
			else
			{
				n++;
				m = 48;
			}
		}
		else
			m++;
	}
	putchar('\n');
	return (0);
}
