#include "main.h"
/**
 * _memcpy - function that fills n bytes
 *@dest: pointer to destenation
 *@src: pointer to source
 *@n: number of bytes to be copied
 * Return: return pointer to the memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}