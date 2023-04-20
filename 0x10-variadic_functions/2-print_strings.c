#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - entry point
 * @separator: size of triangle
 * @n: size of triangle
 * Description: --
 * Return: --
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i = 0;

	va_start(args, n);
	for (i = 0; i < (int)n; i++)
	{
		printf("%s%s", va_arg(args, char*),
			   i != (int)n - 1 && separator != NULL ? separator : "");
	}
	printf("\n");
}
