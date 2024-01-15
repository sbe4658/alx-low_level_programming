#include "main.h"
/**
 * _puts - prints agiven string to stdout followed by '\n'.
 * @s: given string.
 *
 * Return: print a string.
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
