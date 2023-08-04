#include "main.h"
/**
 * _strcpy - copies a string.
 * @src: the string to be copeid.
 * @dest: destination.
 *
 * Return: a char pointer dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, len = 0;

	while (src[len] != '\0')
		len++;
	while (i <= len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
