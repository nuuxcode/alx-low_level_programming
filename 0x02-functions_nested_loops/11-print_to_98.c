#include "main.h"
#include "stdio.h"
/**
 * print_to_98 - check the code.
 * @n: Description of parameter x
 * Description
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98 && n <= 98; i++)
	{
		printf("%d", i);
		fflush(stdout);
		if (i != 98)
		{
		_putchar(',');
		_putchar(' ');
		}
	}
	for (i = n; i >= 98 && n > 98; i--)
	{
		printf("%d", i);
		fflush(stdout);
		if (i != 98)
		{
		_putchar(',');
		_putchar(' ');
		}
	}
	_putchar('\n');
}
