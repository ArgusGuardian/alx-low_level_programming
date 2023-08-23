#include "main.h"
/**
 * _strncpy - copy string to another string
 * @src: pointer to string
 * @dest: pointer to string
 * @n: number of characters to copy
 * Return: pointer to string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j;

	for (j = 0; j < n && j != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
