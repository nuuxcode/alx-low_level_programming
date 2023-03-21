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
void jack_bauer(void)
{
	int min_a;
	int min_b;
	int sec_a;
	int sec_b;

	for (min_a = 0; min_a < 3; ++min_a)
	{
		for (min_b = 0; min_b < 10 && ((min_a == 2 && min_b < 4) || min_a < 2); ++min_b)
		{
			for (sec_a = 0; sec_a < 6; ++sec_a)
			{
				for (sec_b = 0; sec_b < 10; ++sec_b)
				{
					_putchar(min_a + '0');
					_putchar(min_b + '0');
					_putchar(':');
					_putchar(sec_a + '0');
					_putchar(sec_b + '0');
					_putchar('\n');
				}
			
			}
		}	
	}
}
