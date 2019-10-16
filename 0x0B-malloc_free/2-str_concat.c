#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string to be concatenate
 * @s2 : string to be concatenate
 * Return: a pointer.
 */
char *str_concat(char *s1, char *s2)
{
	int d, i, x, s;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (d = 0; s1[d] != '\0'; d++)
		;
	for (i = 0; s2[i] != '\0'; i++)
		;
	new = malloc((sizeof(char) * d) + (sizeof(char) * (i + 1)));
	if (new == NULL)
		return (NULL);
	for (x = 0; x < d; x++)
	{
		new[x] = s1[x];
	}
	for (s = 0; s < i; s++, x++)
	{
		new[x] = s2[s];
	}
	new[x] = '\0';
	return (new);
}
