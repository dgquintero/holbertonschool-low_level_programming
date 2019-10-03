#include <stdio.h>
/**
 * _strcmp - function that concatenates two strings
 *
 * @s1 : parameter to check
 * @s2 : parameter to check
 *
 * Return: a pointer to the serulting string dest.
 */

int _strcmp(char *s1, char *s2)
{
	int b, a;

	for (b = 0; s1[b] != '\0'; b++)
	{
		if (s1[b] == s2[b])
			a = s1[b] - s2[b];
		else
		{
			a = s1[b] - s2[b];
			break;
		}
	}
	return (a);
}
