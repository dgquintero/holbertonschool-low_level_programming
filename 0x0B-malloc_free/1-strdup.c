#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be copy
 *
 * Return: a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	int size, i;
	char *new;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
		;
	new = malloc(sizeof(char) * size + 1);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		new[i] = str[i];
	}
	new[i] = '\0';
	return (new);
}
