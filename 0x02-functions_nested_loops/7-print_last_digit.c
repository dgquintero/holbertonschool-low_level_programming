#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 *
 * @n : parameter to check
 *
 * Return: the valeu of the last digit
 */
int print_last_digit(int n)
{
	int d = n % 10;
	if (d < 0)
	{
		d = (d * -1);
	}
	_putchar(d + '0');
	return (d);
}
