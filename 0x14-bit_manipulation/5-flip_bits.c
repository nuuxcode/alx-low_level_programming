#include "main.h"

/**
 * flip_bits - function
 * @n: a
 * @m: a
 * Return: Always 0.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned long int count = 0;

	while (result)
	{
		count += result & 1;
		result = result >> 1;
	}
	return (count);
}
