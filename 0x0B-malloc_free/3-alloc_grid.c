#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Get point
 *@width: Rows of matrix
 *@height: Col of str
 * Return: Str or null
 */
int **alloc_grid(int width, int height)
{
	int **mx;
	int i;
	int j;
	int k;
	int *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	mx = (int **)malloc(height * sizeof(int *));
	if (mx == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(mx + i) = (int *)malloc(width * sizeof(int));
		if (*(mx + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				p = mx[i];
				free(p);
			}
			free(mx);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (j = 0; j < width; j++)
		{
			mx[k][j] = 0;
		}
	}
	return (mx);
}

