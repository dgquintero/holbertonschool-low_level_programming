#include "holberton.h"

/**
 * _puts_recursion - function that prints a string
 *
 * @s :  pointer to a char
 * Return: Nothing.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
