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
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tail = *head, *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
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
		tail->next = node;
		return (node);
	}
}
