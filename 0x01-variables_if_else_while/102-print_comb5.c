#include <stdio.h>
/**
  * main - prints all possible combos of two two-digits.
  *
  * Return: 0 -> Success
  */
int main(void)
{
	int n = 0, m = 0;

	while (n < 99 && m <= 99)
	{
		if (n >= 10)
		{
			_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
		}
		else
			_putchar(n + 48);
		_putchar(' ');
		if (m >= 10)
		{
			_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
		}
		else
			_putchar(m + 48);
		_putchar(',');
		_putchar(' ');
	}
}
