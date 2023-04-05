#include "main.h"

/**
 * _puts_recursion - fills memory with a constant byte.
 * @s: first bytes of the memory
 * Return: -
 */
void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
