#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints the minimum number of coins to make change
 * @argc : variable to check
 * @argv : variable to check
 * Return: 1 if the argc is different than 2, 0 if is not.
 */

int main(int argc, char *argv[])
{
	int c;

	if ((argc - 1) != 1)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);
	if (c < 0)
	{
		printf("0\n");
	}
	printf("%d\n", c);
	return (0);
}
