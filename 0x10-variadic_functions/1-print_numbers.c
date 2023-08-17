#include "variadic_functions.h"
/**
 * print_numbers - print all its args.
 * @separator: string that separate every num.
 * @n: the last named arg.
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list param;
	unsigned int i;

	va_start(param, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(param, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(param);
}
