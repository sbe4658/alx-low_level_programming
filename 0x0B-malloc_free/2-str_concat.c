#include "main.h"
/**
 * str_concat - concatenates two strings.
 * @s1: First memory address.
 * @s2: Second memory address.
 *
 * Return: a pointer to NEW address in mem that holds them both, 
 * Otherwise NULL.
 */
char *str_concat(char *s1, char *s2)
{
	int len = 0, i = 0;
	char *cat;

	len = _strnlen(s1, s2);
	cat = malloc(sizeof(char) * len);
	if (s1 == NULL || s2 == NULL || cat == NULL)
		return (NULL);
	while (len--)
	{
		if (*s1 != '\0')
		{
			cat[i] = *s1;
			s1++;
		}
		else
		{
			cat[i] = *s2;
			s2++;
		}
		i++;
	}
	return (cat);
}
/**
 * _strnlen - gets the length of two strings.
 * @s1 : 1st.
 * @s2: 2nd.
 *
 * Return: the sum of the two length, otherwise 0.
 */
int _strnlen(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;

	if (s1 == NULL || s2 == NULL)
		return (0);
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	return (len1 + len2);
}
