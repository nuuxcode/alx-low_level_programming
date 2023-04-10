#include "main.h"

/**
 * rot13 - compares two strings.
 * @str: source string
 * Return: pointer to the resulting string dest
 */
char *rot13(char *str)
{
	int i, j;
	int temp;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == a[j] && j < 26)
			{
				str[i] = str[i] + 13;
				temp = str[i] - ('Z' + 1);
				str[i] = 'A' + temp;
				break;
			}
			else
			{
				str[i] = str[i] + 13;
				temp = str[i] - ('z' + 1);
				str[i] = 'a' + temp;
				break;
			}
		}
	}

	return str;
}
