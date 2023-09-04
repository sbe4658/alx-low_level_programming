#include "main.h"
/**
 * read_textfile - reads text from filename file and print what it read.
 * @filename: a path to the targeted file.
 * @letters: the number of bytes to read & print.
 *
 * Return: the number of bytes read & printed, otherwise 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes = 0, n = letters;
	char *text;

	text = malloc(sizeof(char) * letters);
	if (filename == NULL || text == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, text, letters);
	if (bytes == -1)
		return (0);
	close(fd);
	bytes = (bytes == 0 ? n : bytes);
	n = write(STDOUT_FILENO, text, bytes);
	if (bytes == -1)
		return (0);
	return (bytes);
}
