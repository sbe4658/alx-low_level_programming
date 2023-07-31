#include "main.h"
/**
 * _memcpy - copies n  bytes of memory from src area to area dest.
 * @dest: area that the memory would copied to.
 * @src: area to be copied.
 * @n: number of bytes.
 *
 * Return: dest a pointer to the new memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
