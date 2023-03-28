#include "main.h"

/**
 * rev_string - check the code
 * @s: variable
 * Return: void.
 */
void rev_string(char *s)
{
	int i, j;
	char str[10];
	for (i = 0; *(s + i) != '\0'; i++)
	{
	}
	
	for (j = i - 1; j >= 0; j--)
	{
		str[i - j - 1] = *(s + j);
	}
printf("%s\n", str);
	/*char str[sizeof(s)+1];
	str[0] = *s;
	printf("%s\n", s);
	printf("%lu\n", sizeof(s)+1);
	printf("%s\n", str);

	int i, j;
	char str[];
	for (i = 0; *(s + i) != '\0'; i++)
	{
		str[i] = *(s + i);
	}
	for (j = i - 1; j >= 0; j--)
	{
		*(s + j) = (str[j - (i - 1) * -1]);
	}
	_putchar('\n');*/
}
