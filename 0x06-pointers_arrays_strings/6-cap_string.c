#include "main.h"

/**
 * cap_string - compares two strings.
 * @str: source string
 * Return: pointer to the resulting string dest
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i] <= 'z' && str[i] >= 'a')
			{
				str[i] = (str[i] - 'a') + 'A';
			}
		}
		if (str[i] == ' ' || str[i] == '\t' || str[i] == ',' ||
			str[i] == ';' || str[i] == '!' || str[i] == '?' ||
			str[i] == '"' || str[i] == '(' || str[i] == ')' ||
			str[i] == '{' || str[i] == '}' || str[i] == '\n' ||
			str[i] == '.')
		{
			if (str[i + 1] <= 'z' && str[i + 1] >= 'a')
			{
				str[i + 1] = (str[i + 1] - 'a') + 'A';
			}
		}
	}
	return (str);
}
