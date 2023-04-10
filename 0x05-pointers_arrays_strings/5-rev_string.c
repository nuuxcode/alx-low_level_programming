#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i, j, count;
	char tmp;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	for (i = 0; i < count / 2; i++)
	{
		j = count - i - 1;
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
