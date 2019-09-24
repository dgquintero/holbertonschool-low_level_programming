#include "holberton.h"

/**
 * jack_bauer - check the code for Holberton School students.
 *
 * @void : parameter to check
 *
 * Return: dont return
 */
void jack_bauer(void)

{
	int n;
	int d;

	for (d = 00 ; d <= 23 ; d++)
	{
		for (n = 00 ; n <= 59 ; n++)
		{
			_putchar(d / 10 + '0');
			_putchar(d % 10 + '0');
			_putchar(':');
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar ('\n');
		}
	}
}
