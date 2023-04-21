#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - entry point
 * @separator: size of triangle
 * @n: size of triangle
 * Description: --
 * Return: --
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i = 0;

	va_start(args, n);
	for (i = 0; i < (int)n; i++)
	{
		printf("%d%s", va_arg(args, int),
			   i != (int)n - 1 && separator != NULL ? separator : "");
	}
	va_end(args);
	printf("\n");
}
