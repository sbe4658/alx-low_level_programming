#include "main.h"
/**
 * _realloc - re-allocate memory using malloc.
 * @ptr: a pointer to a memory address.
 * @old_size: the current size of ptr.
 * @new_size: the size to be reallocated.
 *
 * Return: same pointer with the new_size size.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *holder;

	if (old_size == new_size)
		return (ptr);

	holder = malloc(new_size);
	if (holder == NULL)
	{
		free(holder);
		return (NULL);
	}
	if (new_size == NULL)
		free(ptr);

	if (new_size > old_size)
		_memcpy(holder, ptr, old_size);
	else if (new_size < old_size)
		_memcpy(holder, ptr, new_size);

	free(ptr);
	return (holder);
}
/**
 * _memcpy - copies n bytes from a string.
 * @dest: Destination string.
 * @src: source string (a pointer to an address in mem technically
 * same for dest
 * @n: The number of bytes to be copied.
 *
 * Return: dest withe copied bytes.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
