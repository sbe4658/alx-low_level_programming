#include "main.h"
/**
 * print_rev - prints a given string in reverse.
 * @s: string.
 *
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int i = 0, c = 0;

	while (s[i] != '\0')
	{
		c++;
		i++;
	}
	while (c >= 0 && s[c] != '\0')
	{
		_putchar(s[c]);
		c--;
	}
	_putchar('\n');
}
