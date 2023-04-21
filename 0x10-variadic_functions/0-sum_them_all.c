#include "variadic_functions.h"

/**
 * sum_them_all - entry point
 * @n: size of triangle
 * Description: --
 * Return: --
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0, i = 0;

	va_start(args, n);

	if (n == 0)
		return (0);

	while (i < (int)n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);

	return (sum);
}
