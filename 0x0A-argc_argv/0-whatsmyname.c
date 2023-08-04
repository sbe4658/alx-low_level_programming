#include "main.h"
/**
 * main - prints the program's name
 * @argc: the number of args passed.
 * @argv: arry of strings.
 *
 * Return: Always 0.
 */
int main(__attribute__((unused)) int argc, char **argv)
{
	char *s;

	s = *argv;
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
	return (0);
}
