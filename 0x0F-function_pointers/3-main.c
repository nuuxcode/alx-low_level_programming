#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

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
	if (argc == 4)
	{
		printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2] != "+" || argv[2] != "-" || argv[2] != "*" || argv[2] != "/" || argv[2] != "%")
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2] != "/" || argv[2] != "%") && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (1);
}
