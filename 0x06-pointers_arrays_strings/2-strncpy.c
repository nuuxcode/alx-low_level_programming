#include "main.h"

/**
 * *_strncpy -> Copy Number Of String From Source Into Destinse
 *
 * @dest: Empty Input
 * @src: Input Source
 * @n: Input Number
 *
 * Return: Destinse String
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
