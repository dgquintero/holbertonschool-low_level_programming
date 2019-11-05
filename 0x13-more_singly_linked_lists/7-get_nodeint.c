#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 *
 * @index: index where the node should be added
 * @head : pointer to a pointer
 * Return: returns the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;

	while (index > 0)
	{
		tmp = tmp->next;
		index--;
	}
	return (tmp);
}
