#include "main.h"
/**
 * argstostr - function that concatenates two strings
 * @ac: first bytes of the memory
 * @av: constant byte b
 * Return: pointer to the resulting string dests
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0;
	char *s, *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			len++;

	s = malloc(len + ac + 1);
	if (s == NULL)
		return (NULL);

	p = s;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
			*p++ = av[i][j++];
		*p++ = '\n';
	}
	*p = '\0';

	return (s);
}