#include "holberton.h"
/**
 * _strspn - gets the lenght of a prefix
 * @s: variable to check
 *
 * @accept: variable to check
 * Return: the bytes in the initial segment.
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c = 0;

	for (a = 0; (*(s + a)) ; a++)
	{
		for (b = 0; (*(accept + b)); b++)
		{
			if (*(s + a) == *(accept + b))
			{
				c++;
				break;
			}
		}
		if (*(accept + b) == '\0')
			break;
	}
	return (c);
}
