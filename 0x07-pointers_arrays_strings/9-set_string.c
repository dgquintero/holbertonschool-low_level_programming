#include "holberton.h"
/**
 * set_string - sets the value of a pointer to a char
 * @to: variable to check
 * @s: variable to check
 *
 * Return: Nothing
 */

void set_string(char **s, char *to)
{
	(*s) = to;
}
