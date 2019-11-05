#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data
 * @head : pointer to a list - list_t
 *
 *
 * Return: the sum of all the data n
 */

int sum_listint(listint_t *head)
{
	unsigned int sum;
	listint_t *tmp = head;

	if (head == NULL)
		return (0);
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
