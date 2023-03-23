#include "main.h"

/**
 * print_numbers - entry point
 *
 * Description: prints the numbers, from 0 to 9, followed by a new line.
 * Return:
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	i++;
	_putchar('\n');
}
