#include "holberton.h"

/**
 * factorial - function that prints a string
 *
 * @n :  integer
 * Return: Nothing.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
