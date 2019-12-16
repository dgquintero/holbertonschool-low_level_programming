#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - function taht deletes the node at index
 *
 * @index: index that the node has to be deleted
 * @head : pointer to a pointer of the head
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tail, *node;

	if (*head == NULL)
		return (-1);
	tail = *head;

	if (index == 0)
	{
		tail = tail->next;
		free(*head);
		*head = tail;
	}
	else
	{
		while ((index - 1) > 0)
		{
			if (tail->next == NULL)
				return (-1);

			tail = tail->next;
			index--;
		}
		node = tail;
		node = node->next->next;
		free(tail->next);
		tail->next = node;
	}
	return (1);
}
