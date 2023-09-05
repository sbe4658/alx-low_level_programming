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
 * append_text_to_file - appends text_content at eof of filename.
 * @filename: the path or the file's name.
 * @text_content: the text to append filename with.
 *
 * Return: 1 if succeed, otherwise -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, check = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
		write(fd, text_content, _strlen(text_content));
	if (check == -1)
		return (-1);
	close(fd);
	return (1);
}
