#include "hash_tables.h"
/**
 * hash_table_set - function that adds ana elemtn to the hash table
 * @ht: pointer to table
 * @key: key of the node
 * @value: value of the node
 * Return: return if the element has been added or no
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *crnt;
	hash_node_t *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (!tmp->value)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	crnt = create(key, value);
	if (!crnt)
		return (0);
	if (ht->array[index])
	{
		crnt->next = ht->array[index];
		ht->array[index] = crnt;
	}
	else
		ht->array[index] = crnt;
	return (1);
}
/**
 * create - create a node with key and value
 * @key: key of node
 * @value: value of node
 * Return: return the node
 */
hash_node_t *create(const char *key, const char *value)
{
	hash_node_t *crnt;

	crnt = malloc(sizeof(hash_node_t));
	if (!crnt)
		return (NULL);

	crnt->key = malloc(strlen(key) + 1);
	if (!crnt->key)
		return (NULL);
	crnt->value = malloc(strlen(value) + 1);
	if (!crnt->value)
		return (NULL);
	strcpy(crnt->key, key);
	strcpy(crnt->value, value);
	crnt->next = NULL;
	return (crnt);
}
