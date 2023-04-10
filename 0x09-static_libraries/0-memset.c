#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: first bytes of the memory
 * @b: constant byte b
 * @n:  bytes of the memory area pointed to by s
 * Return: pointer to the resulting string dests
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
