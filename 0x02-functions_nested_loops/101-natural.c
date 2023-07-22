#include <stdio.h>
#include "main.h"
/**
 * main - sum all multiples of 3 and 5 below 1024.
 *
 * Return: Always 0 -> Success.
 */

int main(void)
{
	int n = 0 , c = 0;

	while (n <= 1024)
	{
		if (n % 3 || n % 5)
		{
			c++;
		}
		n++;
	}
	printf("%d\n", c);
	return (0);
}
