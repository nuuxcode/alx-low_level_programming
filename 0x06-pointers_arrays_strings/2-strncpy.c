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
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		if (dest[i + 1] == '\0')
		{
			for (j = 0; src[j] != '\0' && j < n; j++)
			{
				dest[j] = src[j];
				i++;
			}
			while (i < n)
			{
				dest[i] = '\0';
				i++;
			}
		}
	}
	return (dest);
}
