#include "main.h"
/**
 * alloc_grid - function that concatenates two strings
 * @width: first bytes of the memory
 * @height: constant byte b
 * Return: pointer to the resulting string dests
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid = malloc(height * sizeof(int *));

	if (grid == NULL || width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}

	return (grid);
}
