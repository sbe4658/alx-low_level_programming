#include <stdio.h>
#include "main.h"
/**
 * main - prints the first 98 fibonacci numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int c = 0;
	unsigned long int n = 0, m = 1, sum;

	while (c < 98)
	{
		sum = n + m;
		n = m;
		m = sum;
		if (c != 97)
			printf("%lu, ", sum);
		else
			printf("%lu\n", sum);
		c++;
	}
	return (0);
}
