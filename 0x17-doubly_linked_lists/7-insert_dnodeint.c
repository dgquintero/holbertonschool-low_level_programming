#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @n : integer
 * @idx: index where the node should be added
 * @h : pointer to a pointer
 * Return: the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tail = *h, *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->prev = NULL;
	if (idx == 0)
	{
		node->next = *h;
		(*h)->prev = node;
		*h = node;
		return (node);
	}
	else
	{
		while ((idx - 1) > 0)
		{
			if (tail == NULL)
			{
				free(node);
				return (NULL);
			}
			tail = tail->next;
			idx--;
		}
		node->next = tail->next;
		node->prev = tail;
		tail->next->prev = node;
		tail->next = node;
		return (node);
	}
}
