#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - Prints the alphabet
  *
  * Return: 0 Always -> Success
  */
int main(void)
{
	int n;

	n = 97;
	while (n >= 97 && n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
