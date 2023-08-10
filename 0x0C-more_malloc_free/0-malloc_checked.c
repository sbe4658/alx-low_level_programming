#include "main.h"
/**
 * malloc_checked - allocate memory using malloc.
 * @b: the number of bytes to allocate.
 *
 * Return: Nothing, but will terminate with status value of 98 if
 * malloc failed
 */
void *malloc_checked(unsigned int b)
{
	void *tmp;

	tmp = malloc(b);
	if (tmp == NULL)
	{
		free(tmp);
		exit(98);
	}
	else
		return (tmp);
}
