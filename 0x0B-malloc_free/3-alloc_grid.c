#include <stdlib.h>

/**
 * alloc_grid - Allocate memory for a 2D grid of integers and initialize to 0.
 * @width: The width (number of columns) of the grid.
 * @height: The height (number of rows) of the grid.
 *
 * Return: A pointer to the allocated grid, or NULL.
 */
int **alloc_grid(int width, int height)
{
int **grid, i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(width * sizeof(int));
if (grid[i] == NULL)
{
while (i >= 0)
{
free(grid[i--]);
}
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
