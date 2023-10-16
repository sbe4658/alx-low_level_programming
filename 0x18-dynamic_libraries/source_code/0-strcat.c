#include "main.h"
/**
 * _strcat - contaconates two strings.
 * @dest: the first pointer to a string will hold them both.
 * @src: 2nd pointer to a string.
 *
 * Return: A pointer to a string that's holds them both 'dest'.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, len = 0;

	while (dest[len] != '\0')
		len++;
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
