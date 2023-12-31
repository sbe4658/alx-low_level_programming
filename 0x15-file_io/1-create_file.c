#include "main.h"
/**
 * _strlen - gets the length of s.
 * @s: a given string.
 *
 * Return: the length of s without the null character.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
/**
 * create_file - create a file with the filename name & 600 permission.
 * @filename: the name of the file to be created.
 * @text_content: the content of the file.
 *
 * Return: 1 if it succeed, otherwise -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t s = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
		s = write(fd, text_content, _strlen(text_content));
	if (s == -1)
		return (-1);
	close(fd);
	return (1);
}
