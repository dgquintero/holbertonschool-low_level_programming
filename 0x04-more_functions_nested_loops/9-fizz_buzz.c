#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * @void : parameter to check
 *
 * Return: not return anything.
 */
int main(void)
{
	int d;

	for (d = 1; d <= 100; d++)
	{
		if ((d % 3 == 0) && (d % 10 == 0 || d % 10 == 5))
		{
			printf("FizzBuzz");
		}
		else if (d % 3 == 0)
		{
			printf("Fizz");
		}
		else if (d % 10 == 0 || d % 10 == 5)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", d);
		}
		if (d != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
