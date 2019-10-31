#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - function taht prints all the elements of a list
 * @h : const - list_t
 *
 *
 * Return: the number of notes.
 */

size_t print_list(const list_t *h)
{
	size_t i;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		i++;
	}
	return (i);
}
