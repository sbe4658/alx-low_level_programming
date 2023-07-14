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
	int n, m;

	n = 97;
	while (n >= 97 && n <= 122)
	{
		putchar(n);
		n++;
	}
	m = 65;
	while (m >= 65 && m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
