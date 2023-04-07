#include "main.h"

/**
 * is_palindrome - fills memory with a constant byte.
 * @s: first bytes of the memory
 * Return: -
 */
int _strlen_recursion2(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion2(s + 1) + 1);
}
int is_palindrome(char *s)
{
	int ln = _strlen_recursion2(s);
	int i;

	for (i = 0; i < ln / 2; i++)
	{
		if (*(s + i) != *(s + (ln - i - 1)))
			return (0);
	}
	return (1);
}
