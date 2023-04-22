
#include "3-calc.h"

/**
 * main - entry point
 * @argc: character
 * @argv: character
 *
 * Des[0]cription: -
 * Return: -
 */
int main(int argc, char *argv[])
{
	char *s = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL || s[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(argv[3]) == 0 && (s[0] == '/' || s[0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
