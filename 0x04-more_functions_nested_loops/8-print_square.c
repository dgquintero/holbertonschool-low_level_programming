#include "holberton.h"
/**
 * print_square - check the code for Holberton School students.
 *
 * @size : parameter to check
 *
 * Return: not return.
 */
void print_square(int size)
{
	int d, n;

	if (size > 0)
	{
		for (d = 1; d <= size; d++)
		{
			for (n = 0; n <= size; n++)
			{
				_putchar('#');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
