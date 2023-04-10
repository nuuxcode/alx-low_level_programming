#include "main.h"

/**
 * _strstr - fills memory with a constant byte.
 * @haystack: first bytes of the memory
 * @needle: constant byte b
 * Return: pointer to the resulting string dests
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return ('\0');
}
