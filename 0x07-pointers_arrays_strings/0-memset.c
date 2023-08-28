#include "main.h"
/**
 * _memset - function that fills n bytes
 *@s: pointer to memory
 *@b: character
 *@n: number of bytes to be filled
 * Return: return pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
