#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table you want to add or update
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *tmp;
	char sent = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	while (idx < ht->size)
	{
		tmp = ht->array[idx];
		while (tmp != NULL)
		{
			if (sent == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			sent = 1;
			tmp = tmp->next;
		}
		idx++;
	}
	printf("}\n");
}
