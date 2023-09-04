#include "main.h"
/**
 * create_array - functinon that creates an array
 *@size: size of the array
 *@c: character
 * Return: pointer to array Null if fails or size = 0
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
		return (NULL);

	char *string = (char *)malloc(size + 1);

	if (string == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		string[i] = c;
	string[i] = '\0';

	return (string);
}