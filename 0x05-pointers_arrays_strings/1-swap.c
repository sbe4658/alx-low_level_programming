#include "main.h"
/**
 * swap_int - swaps the value of two ints.
 * @a: 1st pointer to an int.
 * @b: 2nd.
 *
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int tmp = *b;

	*b = *a;
	*a = tmp;
}
