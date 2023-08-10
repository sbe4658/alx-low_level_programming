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
	char *tmp;

	tmp = malloc(size * nmemb);
	if (tmp == NULL || size == 0 || nmemb == 0)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		tmp[i] = '\0';
	return (tmp);
}
