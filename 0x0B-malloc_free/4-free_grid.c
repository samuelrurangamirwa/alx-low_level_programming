#include <stdlib.h>

/**
* free_grid - Frees the memory allocated for a 2D grid.
* @grid: The grid to be freed.
* @height: The height (number of rows) of the grid.
*/
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height <= 0)
{
return;
}

for (i = 0; i < height; i++)
{
if (grid[i] != NULL)
{
free(grid[i]);
}
}

free(grid);
}
