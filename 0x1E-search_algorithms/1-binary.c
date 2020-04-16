#include "search_algos.h"

/**
 * print_array - function that prints an array of integers
 * @array: array to print
 * @size: size of array
 *
 * return: void
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array:");
	for (i = 0; i < size; i++)
	{
		printf(" %d", array[i]);
		if (i != size - 1)
			printf(",");
	}
	printf("\n");
}


/**
 * binary_search - function that searches for a value in a sorted array of int
 *
 * @array : pointer to the first element of the array to search
 * @size: The size of the array
 * @value: is the value to search for
 * Return: the first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, mid;


	if (array != NULL)
	{
		l = 0;
		r = size - 1;
		print_array(array + l, r + 1 - l);
		while (l < r)
		{
			mid = (r + l) / 2;
			if (array[mid] == value)
				return (mid);

			if (array[mid] < value)
				l = mid + 1;
			else
				r = mid - 1;
			print_array(array + l, r + 1 - l);
		}
	}
	return (-1);
}
