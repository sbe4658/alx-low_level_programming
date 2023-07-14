#include <stdio.h>
/**
  * main - prints all digits from 0 - 9
  *
  * Return: 0 Always -> Success
  */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}
