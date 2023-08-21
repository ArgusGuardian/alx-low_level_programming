#include "main.h"
/**
 * _strcpy - copy string from src to dest
 * @dest: pointer to the destination
 * @src: poitner to the source
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, len = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
