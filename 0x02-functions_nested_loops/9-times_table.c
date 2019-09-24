#include "holberton.h"

/**
 * times_table - check the code for Holberton School students.
 *
 * @void : parameter to check
 *
 * Return: dont return
 */
void times_table(void)

{
	int n;
	int d;

	for (d = 0 ; d < 10 ; d++)
	{
		for (n = 0 ; n < 10  ; n++)
		{
			if (((d * n) / 10) != 0)
			{
				_putchar(((d * n) / 10) + '0');
			}
		   	else if ((d * n) % 10 != '0')
			{
				_putchar(' ');
			}
			else if (d == 0 && n > 0)
			{
				_putchar(' ');
			}
			_putchar((d * n) % 10 + '0');
			if (n < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		n = 0;
	}
}
