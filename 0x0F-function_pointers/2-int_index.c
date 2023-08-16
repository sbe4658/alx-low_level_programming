#include "function_pointers.h"
/**
 * int_index - searchs for numbers.
 * @array: a given array.
 * @size: The size of the array array.
 * @cmp: a pointer to a compare function.
 *
 * Return: the index of the first elem, where cmp doesn't return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}
