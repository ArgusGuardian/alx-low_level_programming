#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new;
	unsigned long int i;
	unsigned char flag = 0;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				if (flag == 1)
					printf(", ");

				new = ht->array[i];
				while (new != NULL)
				{
					printf("'%s': '%s'", new->key, new->value);
					new = new->next;
					if (new != NULL)
						printf(", ");
				}
				flag = 1;
			}
		}
		printf("}\n");
	}
}
