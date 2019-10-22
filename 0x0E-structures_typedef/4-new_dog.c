#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * new_dog - that creates a new dog
 * @name : The Name of the dog
 * @age : the age of the dog
 * @owner : the owner of the dog
 * Return: Nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		return (NULL);
	nd->name = malloc((_strlen(name) + 1) * sizeof(char));
	if (nd == NULL)
		return (NULL);
	nd->name = _strcpy(nd->name, name);
	nd->owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (nd->owner == NULL)
	{
		free(nd->name);
		free(nd);
		return (NULL);
	}
	nd->owner = _strcpy(nd->owner, owner);
	nd->age = age;
	return (nd);
}


/**
 * _strlen - check the code for Holberton School students.
 *
 * @s : is a ponter.
 *
 * Return: the lenght of a string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
 * *_strcpy - prints a string, followed by a new line.
 *
 * @src : is a pointer to an array.
 * @dest : is a pointer
 *
 * Return: valeu the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for ( ; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		if (src[i + 1] == '\0')
			dest[i + 1] = src[i + 1];
	}
	return (dest);
}
