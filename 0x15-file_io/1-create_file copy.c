#include "main.h"

/**
 * create_file - function that converts a binary number to an unsigned int
 * @filename: a
 * @text_content: a
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	int i = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDONLY | O_TRUNC);
	if (fd == -1)
	{
		fd = open(filename, O_RDONLY | O_CREAT | O_TRUNC, 0600);
		if (fd == -1)
			return (-1);
	}
	while (text_content[len])
		len++;
	printf("%d\n", len);
	for (i = 0; i < len; i++)
	{
		write(fd, &text_content[i], 1);
	}
	if (close(fd) == -1)
		return (0);
	return (1);
}
