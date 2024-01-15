#include "main.h"
/**
 * _memset - fills the memory with a constant byte.
 * @s: a given string.
 * @b: a constant byte.
 * @n: the number of bytes to be filled
 *
 * Return: a pointer to a string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *tmp = s;
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	while (tmp[i] != '\0')
	{
		s[i] = tmp[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
