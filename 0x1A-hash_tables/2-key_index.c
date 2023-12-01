#include "hash_tables.h"
/**
 * key_index - key to index
 * @key: key to hash
 * @size: size of table
 * Return: return index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int x;

	x = hash_djb2(key);
	return (x % size);
}
