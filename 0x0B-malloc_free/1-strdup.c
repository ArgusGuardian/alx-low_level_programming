#include "main.h"
/**
 * _strdup - functinon that duplicates a string
 *@str: src string
 * Return: pointer to new string Null if fails
 *
 */
char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
		len++;
	}

	duplicate = (char *)malloc(len + 1);
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		duplicate[i] = str[i];

	duplicate[i] = '\0';

	return (duplicate);
}
