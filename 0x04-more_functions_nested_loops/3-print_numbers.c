#include "holberton.h"
/**
 * print_numbers - check the code for Holberton School students.
 *
 * @void : parameter to check
 *
 * Return: not return anything.
 */
void print_numbers(void)
{
	int d;

	for (d = 0; d <= 9; d++)
		_putchar(d + '0');
	_putchar('\n');
}
