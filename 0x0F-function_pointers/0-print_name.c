#include<stdio.h>

/**
 * print_name - prints a name as is
 * @name: pointer to the name of the person
 * @f : pointer to check.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
