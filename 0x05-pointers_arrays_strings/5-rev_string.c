#include "holberton.h"
/**
 * rev_string - function that reverses a string
 *
 * @s : is a pointer to a string
 *
 * Return : not return.
 */

void rev_string(char *s)
{
	int n, f;
	char g[500];

	for (n = 0; *s != '\0'; n++)
	{
		g[n] = *s;
		s++;
	}
	s -= n;
	for (f = n ; f >= 0; f--)
	{
		*s = g[f];
		s++;
	}
	*s = '\0';
}
