#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end
 * @head : pointer to pointer - list_t
 * @n: ocnst char
 *
 * Return: he address of the new element.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h, *c;

	if (head == NULL)
		return (NULL);
	c = *head;
	h = malloc(sizeof(dlistint_t));
	if (h == NULL)
		return (NULL);
	h->n = n;
	if (*head == NULL)
	{
		h->prev = NULL;
		h->next = NULL;
		*head = h;
	}
	else
	{
		while (c->next != NULL)
			c = c->next;
		h->next = NULL;
		h->prev = c;
		c->next = h;
		}
		return (h);
}
