#include "main.h"

/**
 * read_textfile - function that converts a binary number to an unsigned int
 * @filename: a
 * @letters: a
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t num_bytes;
	ssize_t i;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = (char *)malloc(letters * sizeof(char));
	if (!buffer)
		return (0);
	num_bytes = read(fd, buffer, letters);
	if (num_bytes == -1)
	{
		free(buffer);
		return (0);
	}
	for (i = 0; i < num_bytes; i++)
	{
		putchar(buffer[i]);
	}
	close(fd);
	free(buffer);
	return (num_bytes);
}
