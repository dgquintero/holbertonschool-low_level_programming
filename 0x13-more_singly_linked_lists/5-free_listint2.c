#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - function frees a listint_t list
 * @head : pointer to pointer - list_t
 *
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	if(head == NULL)
		return;
	new = *head;

	while (new != NULL)
	{
		new = new->next;
		free(*head);
		*head = new;
	}
	*head = NULL;
}
