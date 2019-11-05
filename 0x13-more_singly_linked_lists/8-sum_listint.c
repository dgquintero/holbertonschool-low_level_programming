#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end
 * @head : pointer to pointer - list_t
 * @n: ocnst char
 *
 * Return: he address of the new element.
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
