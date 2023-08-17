#include "variadic_functions.h"
/**
 * sum_them_all - sums all its args.
 * @n: the last named arg.
 *
 * Return: the sum of the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sumparam;
	unsigned int i;
	int res = 0;

	va_start(sumparam, n);
	for (i = 0; i < n; i++)
		res += va_arg(sumparam, int);
	va_end(sumparam);
	return (res);
}
