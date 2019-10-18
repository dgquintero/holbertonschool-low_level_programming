#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - that reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size : unsigned integer.
 * @new_size : unsigned integer
 * Return: a pointer to the duplicated string.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	if (new_size == old_size)
		return (NULL);
	if (new_size == 0 || ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
}
