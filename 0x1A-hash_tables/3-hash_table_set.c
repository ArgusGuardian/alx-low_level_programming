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
	hash_node_t *current;
	hash_node_t *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (!temp->value)
				return (0);
			return (1);
		}
		temp = temp->next;
	}
	current = create(key, value);
	if (!current)
		return (0);
	if (ht->array[index])
	{
		current->next = ht->array[index];
		ht->array[index] = current;
	}
	else
	{
		ht->array[index] = current;
	}
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
	hash_node_t *current;

	current = malloc(sizeof(hash_node_t));
	if (!current)
		return (NULL);

	current->key = malloc(strlen(key) + 1);
	if (!current->key)
		return (NULL);
	current->value = malloc(strlen(value) + 1);
	if (!current->value)
		return (NULL);
	strcpy(current->key, key);
	strcpy(current->value, value);
	current->next = NULL;
	return (current);
}