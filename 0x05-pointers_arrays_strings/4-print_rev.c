#include "main.h"
/**
 * print_rev - prints a given string in reverse.
 * @s: string.
 *
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;

	while (c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
