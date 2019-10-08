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
	int a, b;

	if (haystack == '\0')
		return ('\0');
	if (needle == '\0')
		return ('\0');
	for (a = 0; (*(haystack + a)) ; a++)
	{
		for (b = 0; (*(needle + b)); b++)
		{
			if (*(haystack + a) == *(needle + b))
				return (haystack + a);

		}
	}
	return (0);
}
