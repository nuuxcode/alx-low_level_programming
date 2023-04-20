#include <stdio.h>

/**
 * print_name - entry point
 * @name: size of triangle
 * @f: size of triangle
 * Description: --
 * Return: --
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
