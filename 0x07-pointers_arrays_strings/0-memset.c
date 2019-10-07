#include "holberton.h"
/**
 * *_memset - prints buffer in hexafills memory with a constant byte
 * @s: the address of memory to print
 * @n: the size of the memory to print
 * @b: constant
 * Return: a pointer to the memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
