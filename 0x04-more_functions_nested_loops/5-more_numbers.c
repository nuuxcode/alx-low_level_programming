#include "main.h"

/**
 * more_numbers - entry point
 *
 * Description: --
 * Return: --
 */
void more_numbers(void)
{
	char n;
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		n = '0';
		for (j = 0; j <= 14; j++)
		{
			/* 0 1 2 3 4 5 6 7 8 9 (n = 0) 0 1 2 3 4*/
			if (j > 9)
				_putchar('1');
			if (n == 58)
				n = '0';
			_putchar(n);
			n++;
		}
		i++;
		_putchar('\n');
	}
}
