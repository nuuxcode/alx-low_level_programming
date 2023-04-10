#include "main.h"

/**
 * string_toupper - compares two strings.
 * @str: source string
 * Return: pointer to the resulting string dest
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			str[i] = (str[i] - 'a') + 'A';
		}
	}
	return (str);
}
