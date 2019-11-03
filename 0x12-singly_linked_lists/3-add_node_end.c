#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end -that adds a new node at the end
 * @head : pointer to pointer - list_t
 * @str: ocnst char
 *
 * Return: the number of notes.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h, *c;
	size_t i = 0;

	c = *head;

	h = malloc(sizeof(list_t));
	if (h == NULL)
		return (NULL);
	h->str = strdup(str);
	if (h->str == NULL)
	{
		free(h);
		return (NULL);
	}
       	while (h->str[i] != '\0')
		i++;
	h->len = i;
	if (*head == NULL)
	{
		h->next = (*head);
		*head = h;
	}
	else
	{
		while (c->next != NULL)
			c = c->next;
		h->next = c->next;
		c->next = h;
	}
	return (*head);
}
