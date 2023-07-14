#include <stdio.h>
/**
  * main - prints all base 16 number 
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
	n = 97;
	while (n <= 102 && n >= 97)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
