#include "main.h"
/**
 * _strlen_recursion - gets the length of string.
 * @s: string.
 *
 * Return: the length.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		s++;
		len = 1 + _strlen_recursion(s);
	}
	return (len);
}
