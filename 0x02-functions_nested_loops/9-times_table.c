#include "main.h"

/**
 * jack_bauer - check the code.
 * Description
 * Return: Always 0.
 */
void times_table(void)
{
	int i, j, n, res;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;
			if (n > 9)
			{
				res = n / 10;

				_putchar(res + '0');
				_putchar(n % 10 + '0');
			}
			else 
			{	
				if (j!=0)
				{
				_putchar(' ');
				}
				_putchar(n + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
