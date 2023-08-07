#include "main.h"
/**
 * _strdup - duplicate a string.
 * @str: a pointer a string.
 *
 * Return: a pointer to newly address with dup string.
 */
char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *dup;

	if (str == NULL)
		return (NULL);
	len = _strlen(str) + 1;
	dup = malloc(sizeof(char) * len);
	if (dup == NULL)
		return (NULL);
	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);
}
/**
 * _strlen - gets the length of a string.
 * @s: the address of the string.
 *
 * Return: The length.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
