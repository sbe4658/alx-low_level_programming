#include "main.h"
/**
 * _puts_recursion - prints a string followed by '\n'.
 * @s: a pointer to the string to be printed.
 *
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	char *tmp = s;

	if (*tmp == '\0')
		_putchar('\n');
	else
	{
		_putchar(*tmp);
		tmp++;
		_puts_recursion(tmp);
	}
}
