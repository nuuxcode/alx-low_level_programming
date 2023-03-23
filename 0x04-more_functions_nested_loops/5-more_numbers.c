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

	while (i < 10)
	{
		for (n = '0'; n <= '9'; n++)
		{
			_putchar(n);
		}
		for (n = '0'; n <= '4'; n++)
		{
			_putchar('1');
			_putchar(n);
		}
		i++;
		_putchar('\n');
	}
}
