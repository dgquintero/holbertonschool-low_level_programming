#include "holberton.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x : pointer to an integer
 * @y : pointer to an integer
 * Return: a variable.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
