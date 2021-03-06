#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *  print_listint - function that prints all the elements of a list
 * @h : const - list_t
 *
 *
 * Return: the number of notes.
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		i++;
	}
	return (i);
}
