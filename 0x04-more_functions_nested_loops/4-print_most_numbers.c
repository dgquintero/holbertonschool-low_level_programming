#include "holberton.h"
/**
 * print_most_numbers - check the code for Holberton School students.
 *
 * @void : parameter to check
 *
 * Return: not return anything.
 */
void print_most_numbers(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		if (d != 2 && d != 4)
			_putchar(d + '0');
	}
	_putchar('\n');
}
