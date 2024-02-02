#include "main.h"
/**
*free_grid - Frees a 2 dimensional grid.
*@grid: A pointer to the 2D grid.
*@height: Grid height.
*Return: Nothing.
*/
void free_grid(int **grid, int height)
{
	int j;

	if (grid == NULL)
	{
		return;
	}
	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
