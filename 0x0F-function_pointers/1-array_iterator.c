#include<stdio.h>

/**
 * print_name - prints a name as is
 * @array: of numbers
 * @size : the size of the array.
 * @action : pointer to the function to use
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	if (array && size && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
