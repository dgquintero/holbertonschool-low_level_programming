#include <stdio.h>
/**
 * reverse_array - function that reverses the content of an array of int
 *
 * @a : is a pointer
 * @n : is an integer
 *
 * Return: not return.
 */

void reverse_array(int *a, int n)
{
	int b = 0, e;

	n--;
	while (b < n)
	{
		e = a[b];
		a[b] = a[n];
		a[n] = e;
		b++;
		n--;
	}
}
