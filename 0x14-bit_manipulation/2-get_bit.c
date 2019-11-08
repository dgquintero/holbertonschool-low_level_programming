#include <stdio.h>
#include "holberton.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @index : the index
 * @n : unsigned long int
 * Return: The valeu of the bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (n & (1 << index))
		return (1);
	return (0);
}
