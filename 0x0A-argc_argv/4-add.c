#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - program that adds positive numbers
 * @argc : variable to check
 * @argv : variable to check
 * Return: 1 if the argc is different than 2, 0 if is not.
 */

int main(int argc, char *argv[])
{
	int i, j, d, h = 0;

	if (argc == 1)
	{
		printf("%d\n", h);
	}
	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
			d += atoi(argv[i]);
		}
	printf("%d\n", d);
	}
	return (0);
}
