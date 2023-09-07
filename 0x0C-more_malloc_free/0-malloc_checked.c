#include "main.h"
/**
 * malloc_checked - functinon allocates memory
 *@b: number of bits
 * Return: pointer to void
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
