#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Get point
 *@grid: rows of matrix
 *@height: Col of str
 * Return: Str or null
 */
void free_grid(int **grid, int height)
{
	int i;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}

