#include "holberton.h"
/**
 * _puts - prints a string, followed by a new line.
 *
 * @str : is a pointer to an array.
 *
 * Return: not return.
 */

void _puts(char *str)
{
	int n;

	for (n = 0 ; str[n] != '\0' ; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
