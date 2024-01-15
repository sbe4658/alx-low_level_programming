#include <stdio.h>
/**
 * puts - prints somthing.
 * @s: string.
 * Return: Nothing.
 */
int puts(const char *s)
{
	int n = 0;

	n = printf("Congratulations, you win the Jackpot!\n");
	return (n);
}
/**
 * dprintf - prints somthing.
 * @s: string.
 * @fd: file director.
 *
 * Return: Nothing.
 */
int dprintf(int fd, const char *s, ...)
{
	fd = printf("Congratulations, you win the Jackpot!\n");
	return (fd);
}
