#include <stdio.h>

/**
 * array_iterator - entry point
 * @array: size of triangle
 * @size: size of triangle
 * @action: size of triangle
 * Description: --
 * Return: --
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	while (i < (int)size && size > 0)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
