#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: 15 if s1 > s2, -15 if s1 != s2 and 0 if they're the same.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, len1 = 0, len2 = 0;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	while (*s1 != '\0')
	{
		if (*s1 == *s2)
			i++;
		s1++;
		s2++;
	}
	if (len1 == i)
	{
		if (len1 == len2)
			return (0);
	}
	else if (len2 > len1)
		return (-15);
	return (15);
}
/**
 * _strlen - gets the length of a string.
 * @s: a given string.
 *
 * Return: the length.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
