#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - function frees a list_t list
 * @head : pointer - list_t
 *
 *
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	list_t *new;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			new = head->next;
			free(head->str);
			free(head);
			head = new;
		}
		free(head->str);
		free(head);
	}
}
