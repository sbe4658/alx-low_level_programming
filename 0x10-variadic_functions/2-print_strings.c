#include "variadic_functions.h"
/**
 * print_strings - prints all strings as args to it.
 * @separator: string separate the other args.
 * @n: is the last named argument.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const ui_t n, ...)
{
	va_list ar;
	ui_t i;
	const char *tmp = separator;

	va_start(ar, n);
	for (i = 0; i < n; i++)
	{
		tmp = va_arg(ar, char *);
		if (tmp != NULL)
			printf("%s", tmp);
		else
			printf("(nil)");
		if (separator != NULL)
		{
			if (i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ar);
}
