#include "main.h"
/**
 * _calloc - allocate memory for an array using.
 * @nmemb: array elements.
 * @size: size of nmemb.
 *
 * Return: a void pointer to a newly allocated space in memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *tmp;

	tmp = malloc(size * nmemb);
	if (tmp == NULL || size == 0 || nmemb == 0)
		return (NULL);
	_memset_to_0(tmp, size * nmemb);
	return (tmp);
}
/**
 * _memset_to_0 - sets memory to 0.
 * @s: address in memory.
 * @n: number of bytes.
 *
 * Return: the same address nut value set to 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = '\0';
	return (s);
}
