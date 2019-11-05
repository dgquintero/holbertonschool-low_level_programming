#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - function that deletes the head node
 * @head : pointer to pointer - list_t
 *
 *
 * Return: head notes data.
 */

int pop_listint(listint_t **head)
{
	int s;

	if (*head == NULL)
		return(0);
	else
	{
		s = (*head)->n;
		free(*head);
		*head = (*head)->next;
		return(s);
	}
}
