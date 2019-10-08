#include "holberton.h"
/**
 * *_strstr - locates a substring
 * @haystack: pointer to a char
 *
 * @needle: pointer to a char
 * Return: a pointer to the first ocurrence of the chcaracter c
 */

char *_strstr(char *haystack, char *needle)
{
	int a;

	if (haystack == '\0')
		return ('\0');
	if (needle == '\0')
		return ('\0');
	for (a = 0; (*(haystack + a)) ; a++)
	{
		if (*(haystack + a) == *(needle))
		{
			return (haystack + a);
		}
		if (*(haystack + a) == *(needle))
		{
			return (haystack + a);
		}
	}
	return (0);
}
