#include "main.h"
#include <string.h>
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
	unsigned int n = 0, i = 0, c = 0;

	c = strlen(accept);
	for (i = 0; *accept; i++)
	{
		if (*accept == s[i])
		{
			accept++;
			n++;
		}
		if (i == c - 1)
			i = 0;
	}
	return (n);
}
