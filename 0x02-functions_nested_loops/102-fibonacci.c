#include <stdio.h>
#include "main.h"
/**
 * main - prints the first 50 fibonacci numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int c = 0;
	unsigned long int n = 0, m = 1, sum;

	while (c < 50)
	{
		sum = n + m;
		n = m;
		m = sum;
		if (c != 49)
			printf("%ld, ", sum);
		else
			printf("%ld\n", sum);
		c++;
	}
	return (0);
}
