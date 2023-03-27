#include "main.h"

/**
 * swap_int - check the code
 * @a: variable
 * @b: variable
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
