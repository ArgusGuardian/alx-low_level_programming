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

	for (i = 0; i < n; i++)
	{
		if (src[i] == 0)
			break;
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
