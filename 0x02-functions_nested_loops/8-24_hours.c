#include "main.h"
/**
  * jack_bauer - prints all minute of the day of Jack Bauer.
  *
  * Return: Nothing.
  */
void jack_bauer(void)
{
	int h, m;

	h = m = 0;
	while (h < 24)
	{
		while (m < 60)
		{
			_putchar((h / 10) + 48);
			_putchar((h % 10) + 48);
			_putchar(':');
			_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
			_putchar('\n');
			m++;
		}
		m = 0;
		h++;
	}
}
