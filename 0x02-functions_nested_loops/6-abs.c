#include "holberton.h"

/**
 * _abs - check the code for Holberton School students.
 *
 * @n : parameter to check
 *
 * Return: the abs valeu of a number
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (0);
	}
}
