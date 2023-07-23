#include <stdio.h>
#include "main.h"
/**
 * main - counts the sums of even fibonacci numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int  c = 0, limit = 4000000, counter = 0;
	unsigned long int n = 0, m = 1, sum;

	while (c < limit)
	{
		sum = n + m;
		n = m;
		m = sum;
		if (sum % 2 == 0)
			counter++;
		c++;
	}
	printf("%d\n", counter);
	return (0);
}
