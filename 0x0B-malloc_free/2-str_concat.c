#include "main.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: first bytes of the memory
 * @s2: constant byte b
 * Return: pointer to the resulting string dests
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;

	char *copy;
	int size = 0;

	if (!s1 || !s2)
		return (NULL);
	while (s1[size])
	{
		size++;
	}
	copy = malloc(size + 1);
	if (!copy)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		copy[i] = s1[i];
	}
	for (i = 0; copy[i] != '\0'; i++)
	{
		if (copy[i + 1] == '\0')
		{
			for (j = 0; s2[j] != '\0'; j++)
			{
				copy[i + 1] = s2[j];
				i++;
			}
		}
	}
	return (copy);
}
