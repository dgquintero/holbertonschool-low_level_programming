#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print n elements of an aaray of integers, followed by a new li
 *
 * @a : is a pointer to a string
 * @n : is a pointer to a string
 * Return : not return.
 */

void print_array(int *a, int n)
{
	int d;

	for (d = 0; d < n; d++)
		if (d != n - 1)
			printf("%i, ", a[d]);
		else
			printf("%i", a[d]);
	printf("\n");
}
