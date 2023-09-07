#include "main.h"
/**
 * _strdup - functinon that duplicates a string
 *@str: src string
 * Return: pointer to new string Null if fails
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (void *)malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}