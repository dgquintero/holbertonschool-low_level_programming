#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: the hash table you want to add or update
 * @key: is the key
 * Return: a struct hash_table_t type
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int i;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);

	for (tmp = ht->array[i]; strcmp(tmp->key, key) != 0; tmp = tmp->next)
		;
	if (tmp == NULL)
		return (NULL);

	return (tmp->value);
}
