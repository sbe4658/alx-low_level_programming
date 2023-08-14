#include "main.h"
/**
 * _atoi - converts a string to numbers.
 * @s:  a pointer ti a string.
 *
 * Return: the converted number.
 */
int _atoi(char *s)
{
	int i, n = 0, dec = 0, m = 0;

	for (i = 0; i < _strlen(s); i++)
	{
		if (*s == '-')
			i++;
			dec *= 10;
		s++;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] <= '9' && s[i] >= '0')
		{
			m = s[i] - '0';
			if (dec >= 10)
				n = m * dec;
			else
				n = m + n;
			dec--;
		}
	}
	if (s[i] == '-')
		n = n * -1;
	return (n);
}
/**
 * _strlen - gets the length of an integer.
 * @s: string.
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
