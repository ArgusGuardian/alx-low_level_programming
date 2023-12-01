#include "hash_tables.h"
/**
 * hash_table_create - createa hashtable
 *@size: size of the hash table
 *Return: return pointer to the table or null
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t *));
	if (!table->array)
		return (NULL);
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
