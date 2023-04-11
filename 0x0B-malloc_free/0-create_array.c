#include "main.h"
/**
 * create_array - function that creates an array of chars,
 *  and initializes it with a specific char
 * @size: first bytes of the memory
 * @c: constant byte b
 * Return: pointer to the resulting string dests
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	int i = size;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	while (i >= 0)
	{
		s[i] = c;
		i--;
	}
	return (s);
}
