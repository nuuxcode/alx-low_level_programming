#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @src: source string
 * @dest: destination string
 * @n: destination string
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		if (dest[i + 1] == '\0')
		{
			for (j = 0; src[j] != '\0' && j < n; j++)
			{
				dest[i + 1] = src[j];
				i++;
			}
		}
	}

	return (dest);
}
