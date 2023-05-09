
#include "main.h"

/**
 * read_file - function that convert
 * @file_from: a
 * @letters: a
 * Return: Always 0.
 */
char *read_file(const char *file_from, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t num_bytes;
	int close_ret = 0;

	if (!file_from)
		return (0);
	fd = open(file_from, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	buffer = malloc(letters * sizeof(char));
	if (!buffer)
		return (0);
	num_bytes = read(fd, buffer, letters);
	if (num_bytes == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	close_ret = close(fd);
	if (close_ret == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (buffer);
}
/**
 * new_file - function that convert
 * @file_to: a
 * @buffer: a
 * Return: Always 0.
 */
int new_file(const char *file_to, char *buffer)
{
	int fd;
	int len = 0;
	int close_ret = 0;

	if (!file_to)
		return (-1);
	fd = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while (buffer && buffer[len])
		len++;
	write(fd, buffer, len);
	if (fd == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	free(buffer);
	close_ret = close(fd);
	if (close_ret == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (1);
}
/**
 * main - function that convert
 * @ac: a
 * @av: a
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	char *read;
	int new;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	read = read_file(av[1], 1024);
	new = new_file(av[2], read);
	return (new);
}
