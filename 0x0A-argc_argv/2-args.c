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
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
