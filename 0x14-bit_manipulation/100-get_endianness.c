#include "main.h"

/**
 * get_endianness - function
 * Return: Always 0.
 */

int get_endianness(void)
{
	if (*(char *)&1)
		return (1);
	return (0);
}
