#include "holberton.h"
#include <stdio.h>
/**
 * *_strstr - locates a substring
 * @haystack: pointer to a char
 *
 * @needle: pointer to a char
 * Return: a pointer to the first ocurrence of the chcaracter c
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b, c;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (c = a, b = 0; needle[b] != '\0'; b++, c++)
		{
			if (haystack[c] != needle[b] || haystack[c] == '\0')
				break;
		}
		if (needle[b] == '\0')
			return (haystack + a);
	}
	return (NULL);
}
