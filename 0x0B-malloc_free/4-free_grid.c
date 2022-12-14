#include "main.h"
#include<stdlib.h>

/**
 * free_grid - Function that frees a 2 dimensional grid
 * @grid: 2 Dimensional Grid
 * @height: Height of the grid
 * Return: Null
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
