#include "holberton.h"
/**
 * *_strpbrk - locates the first ocurrence in the string s
 * @s: the address of memory to print
 *
 * @accept: the address of memory area to be copied
 * Return: a pointer to the byte in s or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; (*(s + a)) ; a++)
	{
		for (b = 0; (*(accept + b)); b++)
		{
			if (*(s + a) == *(accept + b))
			{
				return (s + a);

			}
		}
		if (*(s + b) == b)
			return (s + a);
	}
	return (0);
}
