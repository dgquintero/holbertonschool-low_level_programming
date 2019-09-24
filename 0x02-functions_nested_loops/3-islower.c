#include "holberton.h"
/**
 * _islower - check the code for Holberton School students.
 *
 * @c : parameter to check
 *
 * Return: 1 if is lower case and 0 if is not.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
