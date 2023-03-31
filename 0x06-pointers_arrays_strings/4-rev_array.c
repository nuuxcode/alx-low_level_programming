#include "main.h"

/**
 * reverse_array - compares two strings.
 * @a: source string
 * @n: destination string
 * Return: pointer to the resulting string dest
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - (1 + i)];
		a[n - (1 + i)] = temp;
	}
}
