#include "main.h"
/**
 * _strlen - computes the length of s excluding '\0'.
 * @s: given string.
 *
 * Return: the length of s.
 */
int _strlen(char *s)
{
	int i = 0, c = 0;

	while (s[i] != '\0')
	{
		c++;
		i++;
	}
	return (c);
}
