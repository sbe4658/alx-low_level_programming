#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: a pointer to a string to be printed.
 *
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*s);
	}
}
