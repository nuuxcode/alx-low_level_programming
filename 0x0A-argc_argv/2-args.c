#include <stdio.h>

/**
 * main - entry point
 * @argc: character
 * @argv: character
 *
 * Description: -
 * Return: -
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
