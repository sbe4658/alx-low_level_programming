#include "main.h"
/**
  * print_alphabet_x10 - prints the alphabet in lowercase followed by \n x10.
  *
  * Return: Nothing
  */
void print_alphabet_x10(void)
{
	char c = 'a';
	int n = 0;

	while (n <= 9)
	{
		while (c >= 'a' && c <= 'z')
		{
			_putchar(c);
			c++;
		}
		c = 97;
		_putchar('\n');
		n++;
	}
}
