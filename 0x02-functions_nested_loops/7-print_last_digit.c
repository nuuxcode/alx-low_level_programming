#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - dqzdqzdqzdqzd
 * @n: Description of parameter x
 *
 * Description: ddzqdqzd
 * section header: Section description)*
 * Return: Description of the returned value
 */
int print_last_digit(int n)
{

	if (n < 0)
	{
		n = (n % 10) * -1;
	}
	else
	{
		n = n % 10;
	}
	_putchar(n + '0');
	return (n);
}
