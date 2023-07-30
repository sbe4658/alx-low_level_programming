#include "main.h"
/**
 * rev_string - reverse a given string.
 * @s: string.
 *
 * Return: Nothing.
 */
void rev_string(char *s)
{
	char tmp[1000000];
	int c = 0, i = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	while (i <= c)
	{
		tmp[i] = s[i];
		i++;
	}
	i = 0;
	while (c >= 0)
	{
		c--;
		*(s + i) = tmp[c];
		i++;
	}
	s[i] = '\0';
}
