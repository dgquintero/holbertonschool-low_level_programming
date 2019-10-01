#include "holberton.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str : is a pointer to a string
 *
 * Return : not return.
 */

void puts_half(char *str)
{
	int n, f;

	for (n = 0; str[n] != '\0'; n++)
		n++;
	for (f = n / 2; f <= n; f++)
		_putchar(str[f]);
	_putchar('\n');
}
