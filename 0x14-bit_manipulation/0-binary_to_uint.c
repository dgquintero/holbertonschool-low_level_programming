#include <stdio.h>
#include "holberton.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *
 * @b : pointer to a string.
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int sum = 0, x = 1;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}
	for (; i > 0; i--)
	{
		sum = sum + ((b[i - 1] - 48) * x);
		x = x * 2;
	}
	return (sum);
}
