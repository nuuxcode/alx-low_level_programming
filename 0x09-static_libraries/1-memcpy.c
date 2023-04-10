#include "main.h"

/**
 * _memcpy - fills memory with a constant byte.
 * @dest: first bytes of the memory
 * @src: constant byte b
 * @n:  bytes of the memory area pointed to by s
 * Return: pointer to the resulting string dests
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
