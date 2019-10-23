#include<stdio.h>

/**
 * int_index - searches for an integer.
 * @array: of numbers
 * @size : the numbers of elements in the array.
 * @cmp : pointer to the function to use to compare valeus
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, v;

	if (size <= 0)
		return (-1);
	if (array && size && cmp)
		for (i = 0; i < size; i++)
		{
			v = cmp(array[i]);
			if (v != 0)
				return (i);
			return(-1);
		}
	return (0);
}
