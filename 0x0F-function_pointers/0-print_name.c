#include "function_pointers.h"
/**
 * print_name - prints a given name.
 * @name: the name to print.
 * @f: a function pointer.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		exit(EXIT_FAILURE);
	(*f)(name);
}
