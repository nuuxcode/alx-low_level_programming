#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char str;
	int i = 0;

	while (i < 10)
	{
		for (str = 'a'; str <= 'z'; str++)
		{
			_putchar(str);
		}
		i++;
		_putchar('\n');
	}
}
