#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - that creates a new dog
 * @name : The Name of the dog
 * @age : the age of the dog
 * @owner : the owner of the dog
 * Return: Nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	(*new_dog).name = name;
	(*new_dog).age = age;
	(*new_dog).owner = owner;
	return (new_dog);
}
