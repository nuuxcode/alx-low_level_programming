#include "main.h"

/**
 * _strchr - fills memory with a constant byte.
 * @s: first bytes of the memory
 * @c: constant byte b
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s = (s + i);
		} else {
			return (NULL);
		}
	}
	return (s);
}
