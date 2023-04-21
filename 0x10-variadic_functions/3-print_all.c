#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - entry point
 * @format: size of triangle
 * Description: --
 * Return: --
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	s = malloc(new_size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < old_size && new_size > old_size; i++)
		s[i] = *((char *)ptr + i);
	for (i = 0; i < new_size && new_size < old_size; i++)
		s[i] = *((char *)ptr + i);
	free(ptr);
	return (s);
}
void print_char(void a)
{
	printf("%c", a);
}
void print_int(void a)
{
	printf("%d", a);
}
void print_float(void a)
{
	printf("%f", a);
}
void print_string(void *a)
{
	printf("%s", a);
}

void print_all(const char *const format, ...)
{
	int n = 0, i = 0;
	char *frm = NULL;
	va_list args;
	int (*print_type[4])(void) = {print_char, print_int, print_float, print_string};

	while (format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
		{
			n++;
			frm = _realloc(frm, n, n + 1);
			if (!frm)
			{
				return;
			}
			frm[n - 1] = format[i];
		}
		i++;
	}
	va_start(args, n);
	frm[n] = '\0';
	i = 0;
	while (frm[i])
	{
		print_type[i];
		if (i != i - 1)
			printf(", ");
		i++;
	}
	printf("%d\n", n);
	printf("%s\n", frm);
}
/*
get format
	check if it have c i f s
		count how many of cifs exist
			that number is what gonna tell us how many argument we have

	2 while 2 if 9 variable
		filter format and put everything in array
		now that i have n
			loop through args
				and print it acording to array format index
	/n at end


*/
/*
	va_list args;
	int i = 0;
	char *s;

	va_start(args, n);
	for (i = 0; i < (int)n; i++)
	{
		s = va_arg(args, char *);
		printf("%s%s",
			   s == NULL ? "(nil)" : s,
			   i != (int)n - 1 && separator != NULL ? separator : "");
	}
	va_end(args);
	printf("\n");

*/
