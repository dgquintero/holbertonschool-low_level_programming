#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * @head : const - list_t
 * @str:
 *
 * Return: the number of notes.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *h;
	unsigned int i = 0;

	h = malloc(sizeof(list_t));
	if (h == NULL)
	{
		free(h);
		return (NULL);
	}
	h->str = strdup(str);
	while (str[i] != '\0')
	{
		i++;
	}
	h->len = i;
	h->next = *head;
	*head = h;
	return (h);
}
