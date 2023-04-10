#include "main.h"

/**
 * print_diagsums - fills memory with a constant byte.
 * @a: first bytes of the memory
 * @size: first bytes of the memory
 * Return: -
 */
void print_diagsums(int *a, int size)
{
	int i;
	int s1 = 0;
	int s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += *(a + i * size + i);
		s2 += *(a + i * size + size - i - 1);
	}

	printf("%d, %d\n", s1, s2);
}
