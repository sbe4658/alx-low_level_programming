#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: given string.
 * @c: the char to be located.
 *
 * Return: a char pointer starting with character, otherwise NULL.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s)
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
