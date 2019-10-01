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
		f++;
	if (f % 2 == 0)
		a = f / 2;
	else
		a = (f + 1) / 2;
	for (n = a; n < f; n++)
		_putchar(str[n]);
	_putchar('\n');
}
