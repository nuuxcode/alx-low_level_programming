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
	int **grid = (int **)malloc(height * sizeof(int *));

	if (*grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			return (NULL);
		}
	}

	return (grid);
}
