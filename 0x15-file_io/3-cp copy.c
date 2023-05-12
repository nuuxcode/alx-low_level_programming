#include "main.h"
/**
 * read_and_validate - function that convert
 * @ac: a
 * @av: a
 * Return: Always 0.
 */
void read_and_validate(int ac, char **av)
{
	int fd;
	ssize_t num_bytes;
	char *buffer;
	int letters = 1024;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	buffer = malloc(letters * sizeof(char));
	if (!buffer)
	{
		exit(0);
	}
	num_bytes = read(fd, buffer, letters);
	if (num_bytes == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	close(fd);
}
/**
 * write_and_close - function that convert
 * @ac: a
 * @av: a
 * Return: Always 0.
 */
void write_and_close(char **av)
{
	int fd, close_ret;
	ssize_t num_bytes;
	char *buffer;
	int len = 0;

	fd = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	buffer = malloc(1024 * sizeof(char));
	if (!buffer)
	{
		exit(0);
	}

	while (buffer && buffer[len])
		len++;

	num_bytes = write(fd, buffer, len);
	if (num_bytes == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	close_ret = close(fd);
	if (close_ret == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	free(buffer);
}
/**
 * main - function that convert
 * @ac: a
 * @av: a
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	read_and_validate(ac, av);
	write_and_close(av);
	return (0);
}
