#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: a
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	int i = 0, lenght = 0;

	if (!b)
		return (0);
	while (b[lenght + 1])
	{
		if (b[lenght] != '0' && b[lenght] != '1')
			return (0);
		lenght++;
	}
	for (i = 0; i <= lenght; i++)
	{
		if (b[i] == '1')
			res = res + (1 << (lenght - i));
	}
	return (res);
}
