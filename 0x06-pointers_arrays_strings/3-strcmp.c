#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: source string
 * @s2: destination string
 * Return: pointer to the resulting string dest
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int ret;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		ret = s1[i] - s2[i];
	}
	return (ret);
}
