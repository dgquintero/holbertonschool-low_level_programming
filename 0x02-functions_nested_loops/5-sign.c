#include "holberton.h"

/**
 * print_sign - check the code for Holberton School students.
 *
 * @n : parameter to check
 *
 * Return: 1 print + if n > than 0, r 0 and print 0 if is zero, -1 < than 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
