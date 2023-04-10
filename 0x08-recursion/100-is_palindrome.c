#include "main.h"

/**
 * _strlen_recursion2 - fills memory with a constant byte.
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

/**
 * comp_rec - fills memory with a constant byte.
 * @s: first bytes of the memory
 * @ln: first bytes of the memory
 * @i: first bytes of the memory
 * Return: -
 */
int comp_rec(char *s, int ln, int i)
{
	if (i >= ln)
	{
		return (1);
	}
	if (*(s + i) != *(s + (ln - 1)))
	{
		return (0);
	}
	return (comp_rec(s, ln - 1, i + 1));
}

/**
 * is_palindrome - fills memory with a constant byte.
 * @s: first bytes of the memory
 * Return: -
 */
int is_palindrome(char *s)
{
	int ln = _strlen_recursion2(s);
	int i = 0;

	return (comp_rec(s, ln, i));
}
