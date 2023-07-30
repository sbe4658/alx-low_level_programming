#include "main.h"
/**
 * _strncat - contaconates two strings with n bytes from the second string.
 * @dest: the first pointer to a string will hold them both.
 * @src: 2nd pointer to a string.
 *
 * Return: A pointer to a string that's holds them both 'dest'.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[len] != '\0')
		len++;
	while (i < n && src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
