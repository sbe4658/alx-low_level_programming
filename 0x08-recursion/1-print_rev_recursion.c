#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: a pointer to a string to be printed.
 *
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
	int len = 0, c = 0;

	if (len == 0)
	{
		while (s[len] != '\0')
			len++;
	}
	c = len;
	if (c >= 0)
	{
		_putchar(s[c]);
		c--;
		s = s + c;
		_print_rev_recursion(s);
	}
}
