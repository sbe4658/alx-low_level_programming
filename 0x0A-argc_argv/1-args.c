#include "main.h"
/**
 * main - prints the number of args passed to it.
 * @argc: the size of argv.
 * @argv: array of strings.
 *
 * Return: Always 0.
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	if (argc >= 10)
	{
		argc--;
		_putchar((argc / 10) + 48);
		_putchar((argc % 10) + 48);
	}
	else
		_putchar((argc - 1) + 48);
	_putchar('\n');
	return (0);
}
