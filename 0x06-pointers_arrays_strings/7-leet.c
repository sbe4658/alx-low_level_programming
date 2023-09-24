#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @s: a given string to convert.
 *
 * Return: The converted string.
 */
char *leet(char *s)
{
	char leet[5][3] = {
		{'a', 'A', '4'},
		{'e', 'E', '3'},
		{'o', 'O', '0'},
		{'t', 'T', '7'},
		{'l', 'L', '1'}
	};
	int i, c, n = 0;

	for (i = 0; s[i]; i++)
	{
		for (c = 0; c < 5; c++)
		{
			if (leet[c][n] == s[i] || leet[c][n + 1] == s[i])
				s[i] = leet[c][2];
		}
	}
	return (s);
}
