#include <stdio.h>
/**
  * main - prints all possible combos of three-digits.
  *
  * Return: 0 -> Success
  */
int main(void)
{
	int n, m, h;

	n = m = h = 48;
	while (n < 57 && m <= 57 && h < 56)
	{
		m++;
		putchar(h);
		putchar(n);
		putchar(m);
		if (h != 55 || n != 56 ||  m != 57)
		{
			putchar(44);
			putchar(32);
		}
		if (m == 57 && n == 56)
		{
			h++;
			m = n = 1 + h;

		}
		if (m == 57)
		{
			n++;
			m = n;
		}
	}
	putchar('\n');
	return (0);
}
