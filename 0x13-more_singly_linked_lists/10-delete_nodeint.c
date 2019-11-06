#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index : function that deletes the node at index
 *
 * @index: index of the the node
 * @head : pointer to a pointer of the head of the list
 * Return: 1 if it succeeded, -1 if it failed
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
