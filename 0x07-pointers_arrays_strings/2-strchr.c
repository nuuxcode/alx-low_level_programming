#include "main.h"

/**
 * _strchr - fills memory with a constant byte.
 * @s: first bytes of the memory
 * @c: constant byte b
 * Return: Null when not found
 */
char *_strchr(char *s, char c)
{
	int i;
	char *find = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			find = s + 1;
		}
	}
	return (find);
}
