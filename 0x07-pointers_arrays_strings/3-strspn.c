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
	unsigned int n = 0, i = 0, c = 0;

	while (accept[i] != '\0')
	{
		c = 0;
		while (s[c] != '\0')
		{
			if (s[c] == accept[i])
			{
				n++;
				break;
			}
			c++;
		}
		i++;
	}
	if (n > 0)
		n++;
	return (n);
}
