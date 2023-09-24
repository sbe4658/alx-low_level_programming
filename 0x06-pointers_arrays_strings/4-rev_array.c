#include "main.h"
/**
 * reverse_array - reverse an array of type int.
 * @a: the array;
 * @n: the size of a.
 *
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int i = 0, tmp = 0;

	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
		i++;
	}
}
