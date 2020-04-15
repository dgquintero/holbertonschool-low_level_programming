#include <math.h>
#include "search_algos.h"

/**
 * jump_search -  function that searches for a value in an array of integers
 *
 * @array : pointer to the first element of the array to search
 * @size: The size of the array
 * @value: is the value to search for
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, start = 0, end;

    jump = sqrt(size);
    end = start + jump;
    printf("Value checked array[%lu] = [%d]\n", start, array[start]);
    while ( end < size && array[end] <= value)
    {
        
        start = end;
        end += jump;
        printf("Value checked array[%lu] = [%d]\n", start, array[start]);
        if(end > size - 1)
            end = size;
    }
    printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	for (i = start; i < end; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		    return i;
    }
	return -1;
}
