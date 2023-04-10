#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
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
	int sum, i;
	long unsigned int j;

	sum = 0;
	if (argc != 1)
	{
		for (i = 1; i < argc; i++)
		{
			/*printf("%d %s\n", atoi(argv[i]), argv[i]);*/
			for (j = 0; j < strlen(argv[i]); j++)
			{
				if (!isdigit(argv[i][j]))
				{
					/*printf("'%c' is not a number\n", argv[i][j]);*/
					printf("Error\n");
					return (1);
					/*break;*/
				}
			}
			sum += atoi(argv[i]);
			/*if (atoi(argv[i]) <= 9 && atoi(argv[i]) >= 1)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}*/
		}
	}
	printf("%d\n", sum);
	return (0);
}
