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

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (j == 4)
			break;
		}
	return (i);
}
