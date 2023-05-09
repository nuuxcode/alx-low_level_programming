
#include "main.h"

/**
 * main - function that convert
 * @ac: a
 * @av: a
 * Return: Always 0.
 */
int main(int ac, char **av)
{

	int fd;
	char *buffer;
	ssize_t num_bytes;
	int close_ret = 0;
	int len = 0;
	size_t letters = 1024;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (!av[1])
		return (0);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	buffer = malloc(letters * sizeof(char));
	if (!buffer)
		return (0);
	num_bytes = read(fd, buffer, letters);
	if (num_bytes == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	close_ret = close(fd);
	if (close_ret == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

	if (!av[2])
		return (-1);
	fd = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while (buffer && buffer[len])
		len++;
	write(fd, buffer, len);
	if (fd == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
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
