#include "main.h"

/**
 * is_prime_number2 - fills memory with a constant byte.
 * @n: first bytes of the memory
 * @i: first bytes of the memory
 * Return: -
 */
int is_prime_number2(int n, int i)
{
	if (i > n / 2)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_number2(n, i + 2));
}

/**
 * is_prime_number - fills memory with a constant byte.
 * @n: first bytes of the memory
 * Return: -
 */
int is_prime_number(int n)
{
	int i = 3;

	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	return (is_prime_number2(n, i));
}
