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
	int n, f, x = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
	}
	n--;
	while (x < n)
	{
		f = s[x];
		s[x] = s[n];
		s[n] = f;
		x++;
		n--;
	}
}
