#include <stdio.h>
/**
 * *_strncpy - function that concatenates two strings
 *
 * @dest : paramter to check
 * @src : paramter to check
 * @n : parameter to check
 * Return: a pointer to the serulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[b] = src[b];
	}
	for ( ; b < n; b++)
		dest[b] = '\0';

	return (dest);
}
