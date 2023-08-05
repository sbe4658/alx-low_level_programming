#include "main.h"
/**
 * _strncpy - copies n bytes from a string.
 * @dest: the first pointer to a string will hold them both.
 * @src: 2nd pointer to a string.
 * @n: the numeber of bytes from src.
 *
 * Return: A pointer to a string that's holds them both 'dest'.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (n--)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	return (dest);
}
