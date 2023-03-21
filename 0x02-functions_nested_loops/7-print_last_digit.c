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
	int lastdigit;
	if (n < 0)
	{
		lastdigit = n * (-1);
	}
	lastdigit = n % 10;
	_putchar(lastdigit + '0');
	return (lastdigit);
}
