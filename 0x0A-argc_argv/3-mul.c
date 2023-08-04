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
	int n = 0, m = 0;

	if (argc == 3)
	{
		n = atoi(*(argv + 1));
		m = atoi(*(argv + 2));
		printf("%d\n", n * m);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
