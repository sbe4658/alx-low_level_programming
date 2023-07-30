#include "main.h"
/**
 * puts2 - prints every other charecter in a string.
 * @str: a given string.
 *
 * Return: Nothing.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
