#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end
 * @head : pointer to pointer - list_t
 * @n: ocnst char
 *
 * Return: he address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h, *c;

	c = *head;

	h = malloc(sizeof(listint_t));
	if (h == NULL)
		return (NULL);

	h->n = n;

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
