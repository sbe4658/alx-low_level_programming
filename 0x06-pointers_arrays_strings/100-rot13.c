#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @s: a given string.
 *
 * Return: The modified string.
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		while ((s[i] <= 'z' && s[i] >= 'a') ||
				(s[i] <= 'Z' && s[i] >= 'A'))
		{
			if (s[i] > 'M' || s[i] >= 'm')
			{
				s[i] -= 13;
				break;
			}
			s[i] += 13;
			break;
		}
	}
	return (s);
}
