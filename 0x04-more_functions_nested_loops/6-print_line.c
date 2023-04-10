#include "main.h"

/**
 * print_line - entry point
 *	@n: int number
 * Description: --
 * Return: --
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
