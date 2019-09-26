#include "holberton.h"
/**
 * _isdigit - check the code for Holberton School students.
 *
 * @c : parameter to check
 *
 * Return: 1 if is a digit and 0 if is not.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
