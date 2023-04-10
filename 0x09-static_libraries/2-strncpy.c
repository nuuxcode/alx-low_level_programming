#include "main.h"

/**
 * _strncpy - check the code
 * @dest: pointer destination
 * @src: pointer source
 * @n: variable
 * Return: void.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			for (; i < n; i++)
			{
				dest[i] = '\0';
			}
		}
	}
	return (dest);
}
