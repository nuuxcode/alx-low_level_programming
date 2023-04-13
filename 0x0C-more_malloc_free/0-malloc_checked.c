#include "main.h"
/**
 * malloc_checked - function that creates an array of chars,
 *  and initializes it with a specific char
 * @b: first bytes of the memory
 * Return: pointer to the resulting string dests
 */
void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
