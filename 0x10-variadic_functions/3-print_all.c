#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format: list of types of arguments.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list ar;
	int i, c;
	type_t ts[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_f},
		{'s', print_s}
	};

	va_start(ar, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		c = 0;
		while (c < 4)
		{
			if (ts[c].t == format[i])
			{
				ts[c].f(ar);
				if (format[i + 1] != '\0')
					printf(", ");

			}
			c++;
		}
		i++;
	}
	printf("\n");
	va_end(ar);
}
/**
 * print_char - prints a char.
 * @ar: argument of type int.
 *
 * Return: Nothing.
 */
void print_char(va_list ar)
{
	printf("%c", va_arg(ar, int));
}
/**
 * print_int - prints an int.
 * @ar: argument of type int.
 *
 * Return: Nothing.
 */
void print_int(va_list ar)
{
	printf("%d", va_arg(ar, int));
}
/**
 * print_f - prints a float.
 * @ar: argument of type float.
 *
 * Return: Nothing.
 */
void print_f(va_list ar)
{
	printf("%f", va_arg(ar, double));
}
/**
 * print_s - prints a string.
 * @ar: argument of type char *.
 *
 * Return: Nothing.
 */
void print_s(va_list ar)
{
	char *tmp;

	tmp = "(nil)";
	tmp = va_arg(ar, char *);
	printf("%s", tmp);
}
