#include "holberton.h"
/**
 * *_strcpy - prints a string, followed by a new line.
 *
 * @src : is a pointer to an array.
 * @dest : is a pointer
 *
 * Return: valeu the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for ( ; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		if (src[i + 1] == '\0')
			dest[i + 1] = src[i + 1];
	}
	return (dest);
}
