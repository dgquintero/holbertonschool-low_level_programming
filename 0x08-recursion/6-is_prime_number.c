#include "holberton.h"
int _prim(int n, int i);

/**
 * is_prime_number - check the code for Holberton School students.
 * @n : variable to check.
 * Return: Always.
 */
int is_prime_number(int n)
{
	return (_prim(n, 2));
}


/**
 * _prim -  returns the natural square root of a number
 * @n : variable to check
 * @i : variable to check
 * Return: a variable.
 */
int _prim(int n, int i)
{
	if (n % i == 0 || n < 2)
	{
		return (0);
	}
	if (n / 2 < i)
	{
		return (1);
	}
	return (_prim(n, i + 1));
}
