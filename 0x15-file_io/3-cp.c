#include "main.h"
/**
 * rdwr - reads from a file director and write into another.
 * @fd_from: read from this fd.
 * @fd_to: to this fd.
 * @txt: buffer.
 * @f_from: the name of the read file.
 * @f_to: the name of the wrote file.
 *
 * Return: Nothing.
 */
void rdwr(int fd_from, char *txt, int fd_to, char *f_from, char *f_to)
{
	ssize_t b, w = 0;

	do {
		b = read(fd_from, txt, 1024);
		if (b == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", f_from);
			exit(98);
		}
		write(fd_to, txt, b);
		if (w == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", f_to);
			exit(98);
		}
	} while (b > 0);
}
/**
 * close_files - closes 2 file descriptors.
 * @fd1: the first.
 * @fd2: the second.
 *
 * Return: Nothing.
 */
void close_files(int fd1, int fd2)
{
	int n = 0, m = 0;

	n = close(fd1);
	m = close(fd2);
	if (n == -1 || m == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", (n == -1 ? fd1 : fd2));
		exit(100);
	}
}
/**
 * main - copies the content of a file inside another file.
 * @ac: argument count.
 * @av: argument vector; contains the args passed as strings.
 *
 * Return: On success 0, on error a number that greater than 0.
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;
	char *text;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	text = malloc(sizeof(char) * 1024);
	if (fd_from == -1 || !text)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(98);
	}
	rdwr(fd_from, text, fd_to, av[1], av[2]);
	close_files(fd_from, fd_to);
	free(text);
	return (0);
}
