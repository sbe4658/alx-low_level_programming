#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print to 98.
 * @n: given number to count from.
 *
 * Return: Nothing.
 */

void print_to_98(int n)
{
	if (n != 98)
	{
		if (n < 98)
		{
			while (n < 98)
			{
				printf("%d, ", n);
				n++;
			}
		}
		else
		{
			while (n > 98)
			{
				printf("%d, ", n);
				n--;
			}
		}
	}
	printf("%d\n", 98);
}
