#include "main.h"
/**
 * string_toupper - changes the cases of string to uppercase.
 * @s: a pointer to string.
 *
 * Return: A pointer to the resultant string.
 */
char *string_toupper(char *s)
{
	int i = 0, c = 0;

	while (s[i] != '\0')
	{
		if (s[i] <= 'z' && s[i] >= 'a')
		{
			c = s[i] - 'a';
			s[i] = 'A' + c;
		}
		i++;
	}
	return (s);
}
