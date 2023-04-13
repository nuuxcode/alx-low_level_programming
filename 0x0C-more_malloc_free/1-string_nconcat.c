#include "main.h"
/**
 * string_nconcat - function that creates an array of chars,
 *  and initializes it with a specific char
 * @s1: first bytes of the memory
 * @s2: first bytes of the memory
 * @n: first bytes of the memory
 * Return: pointer to the resulting string dests
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *copy;
	unsigned int size1 = 0;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	while (s1[size1])
	{
		size1++;
	}
	copy = malloc((size1 + n + 1) * sizeof(*copy));
	if (!copy)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
		copy[i] = s1[i];

	for (i = 0; i < n; i++)
		copy[size1 + i] = s2[i];
	copy[size1 + n] = '\0';
	return (copy);
}
