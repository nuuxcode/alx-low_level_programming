#include "main.h"

/**
 * leet - compares two strings.
 * @str: source string
 * Return: pointer to the resulting string dest
 */
char *leet(char *str)
{
	int i, j;
	int a[] = {'a', 'e', 'o', 't', 'l'};
	int b[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == a[j] || str[i] == a[j] - 32)
			{
				str[i] = b[j];
			}
		}
	}
	return (str);
}
