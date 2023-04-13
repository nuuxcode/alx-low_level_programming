#include "main.h"
/**
 * free_grid - function that concatenates two strings
 * @grid: first bytes of the memory
 * @height: constant byte b
 * Return: pointer to the resulting string dests
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
