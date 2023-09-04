#include "main.h"
/**
 * _strdup - functinon that duplicates a string
 *@str: src string
 * Return: pointer to new string Null if fails
 *
 */
char *_strdup(char *str)
{
	int i = 0;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	duplicate = (char *)malloc(i);
	if (duplicate == NULL)
		return (NULL);

	while (i > 0)
	{
		duplicate[i] = str[i];
		i--;
	}

	return (duplicate);
}
