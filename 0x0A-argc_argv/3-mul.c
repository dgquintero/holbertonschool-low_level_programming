#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - program that multiplies two numbers
 * @argc : variable to check
 * @argv : variable to check
 * Return: 1 if the argc is different than 2, 0 if is not.
 */

int main(int argc, char *argv[])
{
	int c, d, e;

	if ((argc - 1) != 2)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);
	d = atoi(argv[2]);
	e = c * d;
	printf("%d\n", e);
	return (0);
}
