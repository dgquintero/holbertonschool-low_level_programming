#include <stdio.h>
/**
 * *_strcat - function that concatenates two strings
 *
 * @dest : paramter to check
 * @src : paramter to check
 *
 * Return: a pointer to the serulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0'; b++, a++)
	{
		dest[a] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
