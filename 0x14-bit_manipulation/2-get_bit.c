#include <stdio.h>
#include "holberton.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *
 * @b : pointer to a string.
 * Return: The converted number
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int msk;

	msk = 1UL << 63;
	if(n == 0)
	{
		_putchar('0');
		return;
	}
	if(n == 1)
	{
		_putchar('1');
		return;
	}
	for( ; msk > 0; msk = msk >>1)
	{
		if(n & msk)
		{
			_putchar('1');
			i = 1;
		}
		else
		{
			if(i)
				_putchar('0');
		}
	}
}
