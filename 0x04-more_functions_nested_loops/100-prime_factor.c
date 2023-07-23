#include "main.h"
#include <stdio.h>
/**
 * main - finds the prime factors of the number.
 *
 * Return: Always 0 -> Success.
 */

int main(void)
{
	long int n = 2, num = 612852475143, sqrtnum = 782848;

	while (n <= sqrtnum)
	{
		if (num % n == 0)
		{
			if (n % n == 0 && n % 1 == 0)
			{
				printf("%ld", n);
				if (n < 12057)
					printf(", ");
			}
		}
		n++;
	}
	printf("\n");
	return (0);
}
