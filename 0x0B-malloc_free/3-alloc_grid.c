#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - hat returns a pointer to a 2 dimensional array of integers
 * @width : integer
 * @height : integer
 * Return: a pointer.
 */
int **alloc_grid(int width, int height)
{
	int d, i;
	int **grid;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	grid = (int **) malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (d = 0; d < height; d++)
	{
		grid[d] = (int *)malloc(width * sizeof(int));
		if (grid[d] == NULL)
		{
			for (d--; d >= 0; d--)
				free(grid[d]);
			free(grid);
			return (NULL);
		}
	}
	for (d = 0; d < height; d++)
	{
		for (i = 0; i < width; i++)
			grid[d][i] = 0;
	}
	return (grid);
}
