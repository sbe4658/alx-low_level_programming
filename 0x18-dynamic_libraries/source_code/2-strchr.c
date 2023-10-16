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
	if (c == '\0')
		return ("");
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
