#include "main.h"

/**
 * get_bit - function
 * @n: a
 * Return: Always 0.
 */

int get_bit(unsigned long int n, unsigned int index)
{

	return ((n >> index) & 1);
}
