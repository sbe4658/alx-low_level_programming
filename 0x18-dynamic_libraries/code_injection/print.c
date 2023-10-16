#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * printf - haha!
 * @str: string.
 *
 * Return: Nah bro it'll exit.
 */
int printf(char *str, ...)
{
	write(1, "--> Please make me win!\n", 24);
	exit(0);
	return (24);
}
/**
 * dprintf - print to file descriptor.
 * @fd: file descriptor.
 * @str: string.
 *
 * Return: the number of chars.
 */
int dprintf(int fd, char *str, ...)
{
	fd = 1;
	write(fd, "--> Please make me win!", 24);
	exit(0);
	return (24);
}
