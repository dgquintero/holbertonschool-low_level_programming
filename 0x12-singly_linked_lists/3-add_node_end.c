#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end -that adds a new node at the end
 * @head : const - list_t
 * @str:
 *
 * Return: the number of notes.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h;
	unsigned int i;

	h = malloc(sizeof(list_t));
	if (h == NULL)
		return (NULL);
	for (; (*head)->next != NULL;)
		(*head) = (*head)->next;
	for (i = 0; str[i] != '\0'; i++)
		;
	h->str = strdup(str);
	if (h->str == NULL)
	{
		free(h);
		return(NULL);
	}
	h = (*head)->next;
        h->next = NULL;
	*head = h;
	return (h);
}
