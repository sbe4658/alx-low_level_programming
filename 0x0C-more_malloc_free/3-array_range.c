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
	int *a, i, c;

	a = malloc(sizeof(int) * ((max - min) + 1));
	if (a == NULL || min > max)
	{
		free(a);
		return (NULL);
	}
	if (min != max)
	{
		c = min;
		for (i = 0; c <= max; i++)
		{
			a[i] = c;
			c++;
		}
	}
	else
		a[0] = max;
	return (a);
}
