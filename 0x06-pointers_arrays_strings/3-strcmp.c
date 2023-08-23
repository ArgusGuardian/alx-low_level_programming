#include "main.h"
/**
 * _strncat - ammend string to another string
 * @src: pointer to string
 * @dest: pointer to string
 * @n: number of characters to ammend
 * Return: pointer to string
 */
void reverse_array(int *a, int n)
{
	int i = 0, j;

	for (j = 0; j < n && j != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return dest;
}