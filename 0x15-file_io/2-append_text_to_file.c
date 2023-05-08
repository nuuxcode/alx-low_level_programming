#include "main.h"

/**
 * append_text_to_file - function that convert
 * @filename: a
 * @text_content: a
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	while (text_content && text_content[len])
		len++;
	write(fd, text_content, len);
	close(fd);
	return (1);
}
