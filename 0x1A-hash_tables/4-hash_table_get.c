#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to table
 * @key: key of the node
 * Return: return the value of a key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *crnt;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);

	crnt = ht->array[idx];

	while (crnt && strcmp(crnt->key, key) != 0)
		crnt = crnt->next;
	if (crnt == NULL)
		return (NULL);
	return (crnt->value);
}
