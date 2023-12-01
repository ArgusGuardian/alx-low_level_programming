#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;

	if (!key)
		return (0);

	new = malloc(sizeof(hash_node_t *));
	if (!new)
		return (0);

	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}

	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		hash_node_t *current = ht->array[index];
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				free(current->key);
				current->key = strdup(key);
				return (1);
			}
			current = current->next;
		}

		if (strcmp(current->key, key) == 0)
			new->next = current;
		ht->array[index] = new;
	}
	else
	{
		new->next = NULL;
		ht->array[index] = new;
	}
	return (1);
}
