#include <stdio.h>
#include "main.h"
/**
 * main - sum all multiples of 3 and 5 below 1024.
 *
 * Return: Always 0 -> Success.
 */

int main(void)
{
	int n = 0, c = 0;

	while (n <= 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			c = c + n;
		}
		n++;
	}
	printf("%d\n", c);
	return (0);
}
