#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning
 * @head : const - list_t
 * @n: const int
 *
 * Return: the address of the new element.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h;

	h = malloc(sizeof(dlistint_t));
	if (h == NULL)
	{
		free(h);
		return (NULL);
	}
	h->n = n;
	h->prev = NULL;
	if (*head == NULL)
	{
		h->next = NULL;
		*head = h;
		return (h);
	}
	h->next = *head;
	(*head)->prev = h;
	*head = h;
	return (h);
}
