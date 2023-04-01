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
	int a[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 26; j++)
		{
			if ((str[i] == a[j] || str[i] == a[j] + 32))
			{

				if (str[i] >= 'a' && str[i] <= 'z')
				{
					printf("%c\n", str[i]);
					printf("%c\n", a[j]);
					str[i] = str[i] + 13;
					temp = str[i] - ('z' + 1);
					str[i] = 'a' + temp;
					printf("%c\n", str[i]);
					printf("-----\n");
				}
				else
				{
					printf("%c\n", str[i]);
					printf("%c\n", a[j] + 32);
					str[i] = str[i] + 13;
					temp = str[i] - ('Z' + 1);
					str[i] = 'A' + temp;
					printf("%c\n", str[i]);
					printf("-----\n");
				}
			}
		}
	}
	return (str);
}
