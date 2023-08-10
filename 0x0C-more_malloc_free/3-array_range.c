#include "main.h"
/**
 * array_range - sets an array to a specific range.
 * @min: The first element.
 * @max: The last element.
 *
 * Return: a pointer to a newly allocated array.
 */
int *array_range(int min, int max)
{
	int *a, i;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min) + 1);
	if (a == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
