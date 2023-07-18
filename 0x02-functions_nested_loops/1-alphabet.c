#include "main.h"
/**
  * print_alphabet - prints the alphabet in lowercase followed by \n
  *
  * Return: Nothing
  */
void print_alphabet(void)
{
	char c = 'a';

	while (c >= 'a' && c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
