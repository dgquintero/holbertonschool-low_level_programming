#include "holberton.h"
/**
 * print_line - check the code for Holberton School students.
 *
 * @n : parameter to check
 *
 * Return: not return.
 */
void print_line(int n)
{
	int d;

	if (n > 0)
	{
		for (d = 0; d <= n; d++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
