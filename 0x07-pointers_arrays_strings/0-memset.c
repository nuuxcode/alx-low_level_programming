#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: first bytes of the memory
 * @b: constant byte b
 * @n:  bytes of the memory area pointed to by s
 * Return: pointer to the resulting string dest
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

/*

Write a function that fills memory with a constant byte.

Prototype: char *_memset(char *s, char b, unsigned int n);
The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
Returns a pointer to the memory area s
FYI: The standard library provides a similar function: memset. Run man memset to learn more.

*/