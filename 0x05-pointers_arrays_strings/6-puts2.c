#include "holberton.h"
/**
 * puts2 - print,every character of a string followed by a new line.
 *
 * @str : is a pointer to a string
 *
 * Return : not return.
 */

void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n += 2)
		_putchar(str[n]);
	_putchar('\n');
}
