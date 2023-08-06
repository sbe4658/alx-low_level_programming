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
	int i = 0, m = 0, c = 0;
	int tmp[1000];

	n--;
	while (c <= n / 2)
	{
		tmp[c] = a[c];
		printf("tmp[%d]: %d\n", c, tmp[c]);
		c++;
	}
	printf("%d\n", c);
	while (i <= n)
	{
		if (i < n / 2)
		{
			m = a[n - i];
			a[i] = m;
		}
		else if (i == n / 2)
			i++;
		else
		{
			a[i] = tmp[c];
			c--;
		}
		printf("a[%d]: %d\n", i, tmp[i]);
		i++;
	}
}
