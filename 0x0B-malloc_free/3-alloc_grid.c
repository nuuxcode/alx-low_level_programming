#include "main.h"
/**
 * alloc_grid - function that concatenates two strings
 * @width: first bytes of the memory
 * @height: constant byte b
 * Return: pointer to the resulting string dests
 */
int **alloc_grid(int width, int height)
{
	int i;

	int **grid = malloc(height);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width);
	}

	return (grid);
}
