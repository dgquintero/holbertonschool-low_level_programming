#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @n : integer
 * @idx: index where the node should be added
 * @head : pointer to a pointer
 * Return: the address of the new node.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tail, *node;

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
