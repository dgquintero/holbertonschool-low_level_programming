#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - that creates an array of integers.
 * @min: integer
 * @max: integer
 * Return: a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *new;

	if (min > max)
		return (NULL);
	new = malloc(sizeof(int) * (max - min + 1));
	for (i = 0; min <= max; i++, min++)
	{
		new[i] = min;
	}
	return (new);
}
