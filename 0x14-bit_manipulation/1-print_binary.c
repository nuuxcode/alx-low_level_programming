#include "main.h"

/**
 * print_binary - function
 * @n: a
 * Return: Always 0.
 */

void print_binary(unsigned long int n)
{
	unsigned long int copy = n;
	int len = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while ((copy >>= 1) > 0)
		len++;

	while (len >= 0)
	{
		((n >> len) & 1) ? _putchar('1') : _putchar('0');
		len--;
	}
}
