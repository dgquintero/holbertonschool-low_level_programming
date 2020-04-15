#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search -  function that searches for a value in an array of integers
 *
 * @array : pointer to the first element of the array to search
 * @size: The size of the array
 * @value: is the value to search for
 * Return: the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
