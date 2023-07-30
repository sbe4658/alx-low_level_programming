#include "main.h"
/**
 * print_array - prints n elements of an array.
 * @a: array.
 * @n: number of elements to be printed.
 *
 * Return: Nothing.
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
		i++;
	}
}
