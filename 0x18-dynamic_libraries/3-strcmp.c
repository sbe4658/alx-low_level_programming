#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: 1st string.
 * @s2: 2nd string.
 *
 * Return: 15 if s1 > len of len of s2, if len1 = len2 it returns 0.
 */
int _strcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (1);
	printf("In progress...\n%s\n%s", s1, s2);
	return (0);
}
