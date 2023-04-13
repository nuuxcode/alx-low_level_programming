#include "main.h"
/**
 * argstostr - function that concatenates two strings
 * @ac: first bytes of the memory
 * @av: constant byte b
 * Return: pointer to the resulting string dests
 */

char *argstostr(int ac, char **av)
{
	int i, j, z = 0;
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
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			s[z] = av[i][j];
			j++;
			z++;
		}
		s[z] = '\n';
		z++;
	}
	s[z] = '\0';
	return (s);
}
