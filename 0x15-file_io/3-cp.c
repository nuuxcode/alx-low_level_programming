#include "main.h"

/**
 * wr_error - function that convert
 * @code: a
 * @name: a
 * Return: Always 0.
 */
void wr_error(int code, char *name)
{
	switch (code)
	{
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name);
		exit(98);
		break;
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name);
		exit(99);
		break;
	}
}

/**
 * main - function that convert
 * @argc: a
 * @argv: a
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int ffrom, fto, wrt = 0, rd = 0;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ffrom = open(argv[1], O_RDONLY);
	if (ffrom == -1)
		wr_error(98, argv[1]);

	fto = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fto == -1)
		wr_error(99, argv[2]);

	while ((rd = read(ffrom, buffer, 1024)))
	{
		if (rd == -1)
			wr_error(98, argv[1]);
		wrt = write(fto, buffer, rd);
		if (wrt == -1)
			wr_error(99, argv[2]);
	}

	if (close(ffrom) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ffrom);
		exit(100);
	}
	if (close(fto) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fto);
		exit(100);
	}
	return (0);
}
