#include <stdio.h>
/**
  * main - prints all possible combinations of a single-digit numbers
  *
  * Return: 0 Alwats -> Success
  */
int main(void)
{
	int n;

	n = 48;
	while (n <= 57 && n >= 48)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(44);
			putchar(32);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
