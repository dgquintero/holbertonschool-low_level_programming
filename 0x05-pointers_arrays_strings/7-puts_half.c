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
	int n, f, a;

	for (n = 0; str[n] != '\0'; n++)
		n++;
	if (n % 2 == 0)
		f = n / 2;
	else
		f = (n + 1) / 2;
	for (a = f; a < n; a++)
		_putchar(str[a]);
	_putchar('\n');
}
