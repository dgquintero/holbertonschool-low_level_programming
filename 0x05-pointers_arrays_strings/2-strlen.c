#include "holberton.h"

/**
 * _strlen - check the code for Holberton School students.
 *
 * @s : is a ponter.
 *
 * Return: the lenght of a string
 */
int _strlen(char *s)
{
	int i;
	for (i= 0; *s[i] != '\0'; ++i);
	printf("%s\n", *s);
	return (0)
}
