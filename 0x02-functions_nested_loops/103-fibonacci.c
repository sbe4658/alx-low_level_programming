#include <stdio.h>
#include "main.h"
/**
 * main - counts the sums of even fibonacci numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int  c = 0;
	unsigned long int n = 0, m = 1, sum, counter = 0, lim = 4000000;

	sum = 0;
	while (sum <= lim)
	{
		sum = n + m;
		n = m;
		m = sum;
		if (sum % 2 == 0)
			counter = counter + sum;
		c++;
	}
	printf("%ld\n", counter);
	return (0);
}
