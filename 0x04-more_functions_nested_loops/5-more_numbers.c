#include "main.h"
/**
 * more_numbers - prints from 0 - 14, 10 times.
 *
 * Return: Nothing.
 */

void more_numbers(void)
{
	int n, m;

	n = 0;
	while (n <= 9)
	{
		m = 0;
		while (m <= 14)
		{
			if (m > 9)
				_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
			m++;
		}
		_putchar('\n');
		n++;
	}
}
