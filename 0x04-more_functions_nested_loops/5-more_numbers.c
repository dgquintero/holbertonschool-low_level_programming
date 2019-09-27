#include "holberton.h"
/**
 * more_numbers - check the code for Holberton School students.
 *
 * @void : parameter to check
 *
 * Return: not return anything.
 */
void more_numbers(void)
{
	int d, n;

	for (n = 1; n <= 10; n++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d > 9)
				_putchar((d / 10) + '0');
			_putchar((d % 10) + '0');
		}
	_putchar('\n');
	}
}
