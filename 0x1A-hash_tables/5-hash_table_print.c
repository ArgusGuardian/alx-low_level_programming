#include "hash_tables.h"
/**
 * hash_table_print - prints the hashtable
 * @ht: pointer to table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;
	unsigned char alert = 0;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				if (alert == 1)
					printf(", ");

				current = ht->array[i];
				while (current != NULL)
				{
					printf("'%s': '%s'", current->key, current->value);
					current = current->next;
					if (current != NULL)
						printf(", ");
				}
				alert = 1;
			}
		}
		printf("}\n");
	}
}
