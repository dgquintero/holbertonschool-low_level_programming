#include <stdio.h>
/**
 * *leet - function that concatenates two strings
 *
 * @c : parameter to check
 *
 * Return: string encoding with 1337.
 */
char *leet(char *c)
{
	int a, b;
	char let[] = {97, 101, 111, 116, 108};
	char num[] = {52, 51, 48, 55, 49};

	for (a = 0; c[a] != '\0'; a++)
	{
		for (b = 0; let[b] != '\0'; b++)
		{
			if (c[a] == let[b] || (c[a] == (let[b] - 32)))
				c[a] = num[b];
		}
	}
	return (c);
}
