#include "main.h"
/**
 * create_array - create an array of chars, initialized with a specific char.
 * @size: The Size of the array.
 * @c: A specific char.
 *
 * Return: The array, otherwise NULL.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *a;

	a = malloc(sizeof(char) * size);
	if (size == 0 || a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
