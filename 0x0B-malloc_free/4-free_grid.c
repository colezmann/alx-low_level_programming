#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2-D grid previously created by alloc_grid()
 * @grid: pointer to 2-D array to be freed
 * @height: number of rows of 2-D array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
