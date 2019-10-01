#include "holberton.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s : is a pointer to a string
 *
 * Return: not return.
 */

void print_rev(char *s)
{
	int n, f;
	for (n = 0; s[n] != '\0'; n++)
	{
		f++;
	}
	for (n = f ; n >= 0; n--)
	{
		_putchar (s[n]);
	}
	_putchar('\n');
}
