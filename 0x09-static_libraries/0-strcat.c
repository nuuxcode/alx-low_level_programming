#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @src: source string
 * @dest: destination string
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		if (dest[i + 1] == '\0')
		{
			for (j = 0; src[j] != '\0'; j++)
			{
				dest[i + 1] = src[j];
				i++;
			}
		}
	}

	return (dest);
}
