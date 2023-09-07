#include "main.h"
/**
 * string_nconcat - functinon allocates memory to concat
 *@s1: first string
 *@s2: second string
 *@n: number of chars
 * Return: pointer
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = (char *)malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return ((void *)ptr);
}
