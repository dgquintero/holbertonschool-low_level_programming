#include <stdio.h>
#include "holberton.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @index : the index
 * @n : unsigned long int
 * Return: The valeu of the bit at index.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int msk;

	msk = 1UL << index;
	if (index > 63)
		return (-1);
	*n = *n + msk;
	return (1);
}
