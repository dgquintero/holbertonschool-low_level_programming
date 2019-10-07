#include "holberton.h"
/**
 * *_memcpy - copies memory area
 * @dest: the address of memory to print
 * @n: the size of the memory to print
 * @src: the address of memory area to be copied
 * Return: a pointer to the memory area.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
