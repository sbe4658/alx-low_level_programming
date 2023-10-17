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
	write(1, "Congratulations, you win the Jackpot!\n", 38);
	exit(0);
	return (38);
}
/**
 * dprintf - print to file descriptor.
 * @fd: file descriptor.
 * @str: string.
 *
 * Return: Same here lol.
 */
int dprintf(int fd, char *str, ...)
{
	fd = 1;
	write(fd, "Congratulations, you win the Jackpot!\n", 38);
	exit(0);
	return (38);
}
