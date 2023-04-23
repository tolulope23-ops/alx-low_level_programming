#include"main.h"
/**
 * free_grid - fress 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 *
 * Description: frees the memory for grid
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
