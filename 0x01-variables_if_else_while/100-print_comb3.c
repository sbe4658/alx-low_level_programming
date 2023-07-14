#include <stdio.h>
/**
  * main - prints all possible combos of two-digits.
  *
  * Return: 0 -> Success
  */
int main(void)
{
	int n = 48, m = 48;

	while (n < 57 && m <= 57)
	{
		m++;
		putchar(n);
		putchar(m);
		if (n != 56 ||  m != 57)
		{
			putchar(44);
			putchar(32);
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
