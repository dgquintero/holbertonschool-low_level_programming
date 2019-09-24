#include "holberton.h"

/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * @void : parameter to check
 *
 * Return: dont return
 */
void print_alphabet_x10(void)

{
	char n;
	int d;

	for (d = 1 ; d <= 10 ; d++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
	_putchar('\n');
	}
}
