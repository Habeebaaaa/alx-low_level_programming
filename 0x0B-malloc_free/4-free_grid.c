#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2d array
 * @grid: grid of memories
 * @height: int
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int a = 0;

	for (; a < height; a++)
		free(grid[a]);
	free(grid);
}
