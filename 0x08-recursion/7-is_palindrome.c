#include "holberton.h"
int _palin(char *d);
int after(char *i, int j);

/**
 * is_palindrome - check the code for Holberton School students.
 * @s : pointer to a char.
 * Return: 1.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (after(s, _palin(s)));
}

/**
 * _palin -  check the code for Holberton School students
 * @d : pointer to a char
 *
 * Return: a variable.
 */

int _palin(char *d)
{
	int e = 0;

	if (*d != '\0')
	{
		e++;
		e = e + _palin(d + 1);
	}
	return (e);
}

/**
 * after - check the code for Holberton School students
 * @i : pointer to a char
 * @j : variable integer
 * Return: 1 or 0
 */
int after(char *i, int j)
{

	if (j >= j / 2)
	{
		if (*i == i[j - 1])
		{
			return (after(i + 1, j - 2));
		}
		else
			return (0);
		}
		return (1);
}
