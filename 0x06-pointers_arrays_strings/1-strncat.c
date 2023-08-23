#include "main.h"
/**
 * _strncat - ammend string to another string
 * @src: pointer to string
 * @dest: pointer to string
 * @n: number of characters to ammend
 * Return: pointer to string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
