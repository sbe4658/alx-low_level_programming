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
		if (_isdigit(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		n = n + atoi(argv[i]);
	}
	printf("%d\n", n);
	return (0);
}
/**
 * _isdigit - checks wether a character is a digit.
 * @c: character.
 *
 * Return: 1 if it is a digit otherwise 0.
 */
int _isdigit(char *s)
{
	while (*s != '\0')
	{
		if (*s < 48 || *s > 57)
			return (0);
		s++;
	}
	return (1);
}
