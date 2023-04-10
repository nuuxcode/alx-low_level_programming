#include "main.h"
#include "stdio.h"
/**
 * print_times_table - check the code.
 * @x: Description of parameter x
 * Description
 * Return: Always 0.
 */
void print_times_table(int x)
{
	int i, j, n;

	for (i = 0; i <= x && (x < 15 && x >= 0); i++)
	{
		for (j = 0; j <= x; j++)
		{
			n = i * j;
			if (n > 9)
			{
				if (n > 99)
				{
					_putchar((n / 100) + '0');
				}
				_putchar((n / 10) % 10 + '0');
				_putchar(n % 10 + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar(n + '0');
			}
			if (j < x)
			{
				_putchar(',');
				if (n / 100 == 0  || n >= 99)
				{
					_putchar(' ');
					if ((i * (j + 1)) / 100 == 0)
					{
						_putchar(' ');
					}
				}
			}
		}
		_putchar('\n');
	}
}
