#include "main.h"
/**
 * _strspn - gets the length of prefix substring, check characters
 * 	     from s againt accept.
 * @s: char pointer to a string.
 * @accept: a char pointer to a string contains chars to compute.
 *
 * Return: the number of bytes in the intial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 1, i = 0, c = 0, len = 0;

	while (s[len] != '\0')
		len++;
	while (accept[c] != '\0')
	{
		if (i == len)
		{
			i = 0;
			c++;
		}
		else if (s[i] == accept[c])
		{
			n++;
			c++;
		}
		i++;
	}
	return (n);
}
