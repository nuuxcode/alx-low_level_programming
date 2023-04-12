#include "main.h"
/**
 * argstostr - function that concatenates two strings
 * @ac: first bytes of the memory
 * @av: constant byte b
 * Return: pointer to the resulting string dests
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int size = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			size++;
			j++;
		}
		size++;
	}
	s = malloc(size + 1);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			s[i] = av[i][j];
			printf("%c\n", s[i]);
			j++;
		}
	}

	printf("%s\n", s);
	return (s);
}
