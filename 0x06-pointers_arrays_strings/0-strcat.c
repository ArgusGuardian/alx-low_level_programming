#include "main.h"
/**
 * _atoi - copy string from src to dest
 * @s: pointer to string
 * Return: integer
 */
char *_strcat(char *dest, char *src)
{
	char *tmp;
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return dest;
}