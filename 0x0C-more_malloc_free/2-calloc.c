#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - that allocates memory for an array
 * @nmemb: int
 * @size : size
 * Return: a pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		str[i] = '\0';
	}
	return (str);
}
