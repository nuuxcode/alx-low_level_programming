#include "main.h"

/**
 * print_number - compares two strings.
 * @n: source string
 * Return: pointer to the resulting string dest
 */
void print_number(int n)
{
	unsigned int x;

	x = n;
	if (n < 0)
	{
		x = n * -1;
		_putchar('-');
	}

	if (x / 10)
	{
		print_number(x / 10);
		_putchar(x % 10 + '0');
	}
	else
	{
		_putchar(x + '0');
	}
}
