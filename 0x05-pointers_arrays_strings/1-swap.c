#include "holberton.h"

/**
 * swap_int - check the code for Holberton School students.
 *
 * @a : pointer *n
 * @b : pointer *b
 * Return: not return
 */
void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;

}
