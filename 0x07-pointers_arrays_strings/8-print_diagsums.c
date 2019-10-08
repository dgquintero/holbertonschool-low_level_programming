#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of the two diagonals of a sqr
 * @a: variable to check
 *
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int b;
	int c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}
		_putchar('\n');
	}
}
