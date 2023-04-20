#include <stdio.h>

/**
 * array_iterator - entry point
 * @array: size of triangle
 * @size: size of triangle
 * @action: size of triangle
 * Description: --
 * Return: --
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	while (i < (int)size)
	{
		action(array[i]);
		i++;
	}
}
