#include <stdio.h>
/**
  * main - prints all digits from 0 - 9
  *
  * Return: 0 Always -> Success
  */
int main(void)
{
	int n;

	n = 48;
	while (n <= 57 && n >= 48)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
