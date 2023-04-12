#include "main.h"
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy
 * of the string given as a parameter
 * @str: first bytes of the memory
 * Return: pointer to the resulting string dests
 */
char *_strdup(char *str)
{
	char *copy;
	int size = 0;
	int i;

	if (!str)
		return (NULL);
	while (str[size])
	{
		size++;
	}
	copy = malloc(size + 1);
	if (!copy)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
