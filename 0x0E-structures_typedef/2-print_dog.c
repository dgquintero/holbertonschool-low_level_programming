#include <stdio.h>
#include "dog.h"

/**
 * print_dog - that prints a struct dog
 * @d : variable of type struct dog
 *
 *
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);

	if ((*d).owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s\n", (*d).owner);
}
