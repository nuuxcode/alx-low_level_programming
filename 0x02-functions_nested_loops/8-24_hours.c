#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - dqzdqzdqzdqzd
 *
 * Description: ddzqdqzd
 * section header: Section description)*
 * Return: Description of the returned value
 */
void jack_bauer(void)
{
	int ma;
	int mb;
	int sec_a;
	int sec_b;

	for (ma = 0; ma < 3; ++ma)
	{
		for (mb = 0; mb < 10 && ((ma == 2 && mb < 4) || ma < 2); ++mb)
		{
			for (sec_a = 0; sec_a < 6; ++sec_a)
			{
				for (sec_b = 0; sec_b < 10; ++sec_b)
				{
					_putchar(ma + '0');
					_putchar(mb + '0');
					_putchar(':');
					_putchar(sec_a + '0');
					_putchar(sec_b + '0');
					_putchar('\n');
				}
			}
		}
	}
}
