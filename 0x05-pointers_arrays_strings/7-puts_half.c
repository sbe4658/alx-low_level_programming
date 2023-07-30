#include "main.h"
/**
 * puts_half - prints the second half of a string.
 * @str: a given string.
 *
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int n, len = 0;

	while (str[len] != '\0')
		len++;
	n = len / 2;
	if (len % 2 == 0)
	{
		while (n <= len - 1)
		{
			_putchar(str[n]);
			n++;
		}
		_putchar('\n');
	}
}
