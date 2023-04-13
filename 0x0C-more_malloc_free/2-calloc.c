#include "main.h"
/**
 * _calloc - function that creates an array of chars,
 *  and initializes it with a specific char
 * @nmemb: first bytes of the memory
 * @size: first bytes of the memory
 * Return: pointer to the resulting string dests
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		s[i] = 0;
	}
	return (s);
}
