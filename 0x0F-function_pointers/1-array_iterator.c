#include "function_pointers.h"
/**
 * array_iterator - call the action function on each element of a array.
 * @array: a given array.
 * @size: The size of the array array.
 * @action: a function pointer.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size == 0 || array == NULL || action == NULL)
		exit(-1);
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
