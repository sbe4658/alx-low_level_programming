#include "main.h"
/**
 * cap_string - capitalize words in a string.
 * @s: a given string.
 *
 * Return: a pointer the rsultatent string.
 */
char *cap_string(char *s)
{
	char sep[] = " \t\n,;.!?\"(){}";
	int i = 0, c = 0, csep;

	while (s[i] != '\0')
	{
		if (i == 0)
		{
			if (s[i] <= 'z' && s[i] >= 'a')
			{
				c = s[i] - 'a';
				s[i] = c + 'A';
			}
		}
		csep = 0;
		while (sep[csep] != '\0')
		{
			if (s[i] == sep[csep])
			{
				if (s[i + 1] <= 'z' && s[i + 1] >= 'a')
				{
					c = s[i + 1] - 'a';
					s[i + 1] = c + 'A';
				}
			}
			csep++;
		}
		i++;
	}
	return (s);
}
