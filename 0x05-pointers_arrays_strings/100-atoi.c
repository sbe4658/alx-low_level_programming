#include "main.h"
/**
 * _atoi - converts a string to numbers.
 * @s:  a pointer ti a string.
 *
 * Return: the converted number.
 */
int _atoi(char *s)
{
	int i = 0, n = 0, tmp = 0;

	n = _strdlen(s);
	while (s[i] != '\0')
	{
		if (_isdigit(s[i]) == 1)
		{
			if (n == 0)
				break;
			if (s[i] != '0')
				tmp += (s[i] - '0') * whonum(n);
			n--;
		}
		i++;
	}
	if (s[i] == '\0')
	{
		for (i = 0; s[i]; i++)
		{
			if (_isdigit(s[i + 1]) == 1 && s[i] == '-')
			{
				tmp = -tmp;
				break;
			}
		}
	}
	return (tmp);
}
/**
 * _strdlen - gets the length of an integer.
 * @s: string.
 *
 * Return: the length.
 */
int _strdlen(char *s)
{
	int len = 0, i;

	if (s != NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (_isdigit(s[i]) == 1)
				len++;
			else if (_isdigit(s[i + 1]) == 0 && len > 0)
				break;
		}
	}
	return (len);
}
/**
 * _isdigit - check if c is a digit.
 * @c: character passed.
 *
 * Return: 1 if c is a digit, otherwise 0.
 */
int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/**
 * whonum - get the place of the digit.
 * @i: index to the digit.
 *
 * Return: a number that have the place of c.
 */
int whonum(int i)
{
	int dec = 1;

	while (i > 1)
	{
		dec *= 10;
		i--;
	}
	return (dec);
}
