#include <stdio.h>
/**
 * *_strncat - function that concatenates two strings
 *
 * @dest : paramter to check
 * @src : paramter to check
 * @n : parameter to check
 * Return: a pointer to the serulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; b < n && src[b] != '\0'; b++, a++)
	{
		dest[a] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
