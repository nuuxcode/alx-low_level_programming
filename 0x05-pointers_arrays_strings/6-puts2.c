#include "main.h"

/**
 * puts2 - reverses a string
 * @str: string to reverse
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
