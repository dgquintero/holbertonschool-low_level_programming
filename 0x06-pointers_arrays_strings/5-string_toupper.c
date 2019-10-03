#include <stdio.h>
/**
 * *string_toupper - function that concatenates two strings
 *
 * @c : parameter to check
 *
 * Return: string in uppercase.
 */

char *string_toupper(char *c)
{
	int b;

	for (b = 0; c[b] != '\0'; b++)
	{
		if (c[b] >= 97 && c[b] <= 122)
			c[b] = c[b] - 32;
	}
	return (c);
}
