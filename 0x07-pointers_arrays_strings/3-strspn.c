#include "holberton.h"
/**
 * *_memcpy - copies memory area
 * @dest: the address of memory to print
 * @n: the size of the memory to print
 * @src: the address of memory area to be copied
 * Return: a pointer to the memory area.
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b;

	for (a = 0; *(s + a) ; a++)
	{
		for (b = 0; *(accept + b); b++)
			if *(s + a) == *(accept + b)
			{
			       a++;
			}
	}
	return (0);
}
