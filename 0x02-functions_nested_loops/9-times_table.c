#include "main.h"
/**
  * times_table - prints the 9 times table starting with 0.
  *
  * Return: Nothing.
  */
void times_table(void)
{
	int n = 0, c = 0;

	for (n = 0; n <= 9; n++)
	{
		for (c = 0; c <= 9; c++)
		{
			n = n * c;
			if (n != 0 && (n % 10) != 0)
			{
				_putchar((n / 10) + 48);
				_putchar((n % 10) + 48);
			}
			else
				_putchar(n + 48);
			if (c != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
