
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
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	char *s = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (b == 0 && (s[0] == '/' || s[0] == '%'))
	{
		printf("Error\n");
		exit(100);x
	}
	if (get_op_func(argv[2]) == NULL ||
		s[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(argv[2])(a, b));
	return (0);
}
