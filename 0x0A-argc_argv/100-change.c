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
	int coin;
	int total = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < (int)strlen(argv[1]); i++)
	{
		if (!isdigit(argv[1][i]))
		{
			printf("Error\n");
			return (1);
		}
	}
	coin = atoi(argv[1]);
	while (coin > 0)
	{
		i = 0;
		while (i < 5)
		{
			if (coins[i] <= coin)
			{
				coin -= coins[i];
				total++;
				break;
			}
			i++;
		}
	}
	printf("%d\n", total);
	return (0);
}
