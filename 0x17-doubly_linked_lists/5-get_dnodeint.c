#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 *
 * @index: index where the node should be added
 * @head : pointer to a pointer
 * Return: returns the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;

	while (index > 0)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		index--;
	}
	return (tmp);
}
