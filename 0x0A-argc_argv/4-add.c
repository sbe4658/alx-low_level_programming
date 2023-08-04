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
	int n = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		n = n + atoi(argv[i]);
	}
	printf("%d\n", n);
	return (0);
}
