#include "main.h"
/**
 * main - copies the content of a file inside another file.
 * @ac: argument count.
 * @av: argument vector; contains the args passed as strings.
 *
 * Return: On success 0, on error a number that greater than 0.
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, n = 0, m = 0;
	ssize_t bytes, tmp = 0;
	char *text;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	text = malloc(sizeof(char) * 1024);
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	while (bytes >= 0)
	{
		bytes = read(fd_from, text, 1024);
		if (bytes == -1 || !text || !av[1])
		{
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		tmp = write(fd_to, text, bytes);
		if (fd_to == -1 || tmp == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(98);
		}
		else if (bytes == 0)
			break;
	}
	n = close(fd_from);
	m = close(fd_to);
	if (n == -1 || m == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", (n == -1 ? fd_from : fd_to));
		exit(100);
	}
	free(text);
	return (0);
}
