#include "main.h"
/**
 * main - prints the number of args passed to it.
 * @argc: the size of argv.
 * @argv: array of strings.
 *
 * Return: Always 0.
 */
int main(__attribute__((unused)) int argc, char **argv)
{
	int cents[5] = {1, 2, 5, 10, 25}, n = 0, s = 0, i = 0;

	if (argc == 1)
	{
		n = atoi(argv[1]);

	}
	printf("%d\n", n);
}
