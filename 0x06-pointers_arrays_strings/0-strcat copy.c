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
		printf("%c\n", dest[i]);
		printf("\n i: %d", i);
		if (dest[i + 1] == '\0')
		{

			/*printf("\n i: %d", i);*/
			for (j = 0; src[j] != '\0'; j++)
			{
				/*printf("%c", src[j]);*/
				/*printf("\n %d %d", i, j);*/
				/*printf("\n i: %d \n j: %d", i, j);*/
				dest[i+j] = src[j];
			}
		}
	}

	return (dest);
}
