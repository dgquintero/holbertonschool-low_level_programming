#include "holberton.h"
/**
 * *_strchr - locates a character in a string
 * @s: the address of memory to print
 *
 * @c: the address of memory area to be copied
 * Return: a pointer to the first ocurrence of the chcaracter c
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; *(s + a); a++)
	{
		if (*(s + a) == c)
			return (s + a);
	}
	return (s);
}
