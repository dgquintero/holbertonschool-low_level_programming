#include "holberton.h"
/**
 * print_diagonal - check the code for Holberton School students.
 *
 * @n : parameter to check
 *
 * Return: not return.
 */
void print_diagonal(int n)
{
	int d, e;

	if (n > 0)
	{
		for (d = 1; d <= n; d++)
		{
			for (e = 1; e < d; e++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
