#include "main.h"

/**
 * _strchr - fills memory with a constant byte.
 * @s: first bytes of the memory
 * @c: constant byte b
 * Return: Null when not found
 */
char *_strchr(char *s, char c)
{
	char *result = NULL;

	while (*s != '\0')
	{
		if (*s == c)
		{
			result = s;
			break;
		}
		s++;
	}

	return (result);
}
