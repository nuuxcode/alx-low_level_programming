#include "main.h"

/**
 * _strncpy - function that concatenates two strings
 * @src: source string
 * @dest: destination string
 * @n: destination string
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	for (i = 0; dest[i] != '\0' && i > n; i++)
	{
		dest[i] = '\0';
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
