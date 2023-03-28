#include "main.h"

/**
 * puts_half - check the code
 * @str: variable
 * Return: void.
 */
void puts_half(char *str)
{
	int count;
	int i;

	count = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	if (count % 2 == 0)
	{
		for (i = count / 2; i <= count - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (count + 1) / 2; i <= count - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
