#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int x;

	x = key_index((const unsigned char *)key, ht->size);
	if (ht->array[x])
	{
		while (ht->array[x]->next != NULL)
		{
			if (strcmp(ht->array[x]->key, key) == 0)
				return (ht->array[x]->value);
			ht->array[x] = ht->array[x]->next;
		}
	}
	return (NULL);
}
