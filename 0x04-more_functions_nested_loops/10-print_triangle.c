#include "holberton.h"
/**
 * print_triangle - check the code for Holberton School students.
 *
 * @size : parameter to check
 *
 * Return: not return.
 */
void print_triangle(int size)
{
	int d, e;

	if (size > 0)
	{
		for (d = 0; d < size; d++)
		{
			for (e = 0; e < size; e++)
			{
				if ((d + e) < (size - 1))
				{
					_putchar(' ');
				}
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
