#include "main.h"
/**
 * _strcpy - copies n bytes from a string.
 * @src: the string to be copeid.
 * @dest: destination.
 * @n: The number of bytes to be copied.
 *
 * Return: a char pointer dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
