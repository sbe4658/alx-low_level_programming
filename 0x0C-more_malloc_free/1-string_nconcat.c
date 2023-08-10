#include "main.h"
/**
 * string_nconcat - contaconate two strings.
 * @s1: 1st string.
 * @s2: 2nd string.
 * @n: n bytes to be copied from s2.
 *
 * Return: a pointer to a newly allocated space in mem, a string
 * that have s1 and the first n bytes of s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i = 0;
	char *cat;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n > len2)
		n = len2;
	cat = malloc(sizeof(char) * (len1 + n) + 1);
	if (cat == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			cat[i] = s1[i];
	}
	if (s2 != NULL)
	{
		while (n != 0)
		{
			cat[i] = *s2;
			i++;
			n--;
			s2++;
		}
	}
	cat[i] = '\0';
	return (cat);
}
/**
 * _strlen - gets the length of a string.
 * @s: a pointer to a string.
 *
 * Return: The length of s.
 */
int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
		exit(0);
	while (s[len] != '\0')
		len++;
	return (len);
}
