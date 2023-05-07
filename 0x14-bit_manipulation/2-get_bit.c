#include "main.h"

/**
 * get_bit - function
 * @n: a
 * @index: a
 * Return: Always 0.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1);
}
