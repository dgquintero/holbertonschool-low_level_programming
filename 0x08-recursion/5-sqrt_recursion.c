#include "holberton.h"
int _low(int n, int y);

/**
 * _sqrt_recursion - check the code for Holberton School students.
 * @n : variable to check.
 * Return: Always.
 */
int _sqrt_recursion(int n)
{
	return (_low(n, 0));
}


/**
 * _low -  returns the natural square root of a number
 * @n : variable to check
 * @y : variable to check
 * Return: a variable.
 */
int _low(int n, int y)
{
	if (y > n)
	{
		return (-1);
	}
	if (n <= 0)
	{
		return (-1);
	}
	if (n == y * y)
	{
		return (y);
	}
	return (_low(n, (y + 1)));
}
