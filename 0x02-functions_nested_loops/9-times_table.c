#include "main.h"

/**
 * times_table - check the code.
 * Description
 * Return: Always 0.
 */
void times_table(void)
{
	int a, b, n;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			n = a * b;
			if (n > 9)
			{
				_putchar((n / 10) + '0');
				_putchar(n % 10 + '0');
			}
			else
			{
				if (b != 0)
				{
				_putchar(' ');
				}
				_putchar(n + '0');
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
