#include "main.h"

/**
 * _strspn - fills memory with a constant byte.
 * @s: first bytes of the memory
 * @accept: constant byte b
 * Return: pointer to the resulting string dests
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int notfound = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (accept[i] == '\0')
			break;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
			if (accept[j + 1] == '\0')
				notfound = 1;
		}
		if (notfound)
			break;
	}
	return (i);
}
