#include "main.h"
/**
 * rev_string - reverse a given string.
 * @s: string.
 *
 * Return: Nothing.
 */
void rev_string(char *s)
{
	char *tmp = s;
	int c = 0, i = 0;

	while (tmp[c] != '\0')
	{
		c++;
	}
	c--;
	while (c >= 0)
	{
		s[i] = tmp[c];
		c--;
		i++;
	}
	s[c] = '\0';
}
