#include "main.h"
/**
 * _strspn - gets the length of prefix substring, check character
 * from s againt accept.
 * @s: char pointer to a string.
 * @accept: a char pointer to a string contains chars to compute.
 *
 * Return: the number of bytes in the intial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0, i = 0, len = 0, c = 0;

	while (accept[len] != '\0')
		len++;
	while (c <= len)
	{
		if (*s == '\0')
		{
			i = 0;
			c++;
		}
		else if (accept[c] == s[i])
		{
			i = 0;
			n++;
			c++;
		}
		i++;
	}
	return (n);
}
