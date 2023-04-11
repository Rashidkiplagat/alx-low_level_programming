#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers and initializes it to 0
 * @width: Width of the grid
 * @height: Height of the grid
 *
 * Return: A pointer to the newly created grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
	return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
{
	grid[i] = malloc(width * sizeof(int));
	if (grid[i] == NULL)
{
		/* Free previously allocated memory */
	for (j = i - 1; j >= 0; j--)
		free(grid[j]);
	{
	free(grid);
	}
	return (NULL);
}

	/* Initialize elements to 0 */
		for (j = 0; j < width; j++)
		grid[i][j] = 0;
}

	return (grid);
}
