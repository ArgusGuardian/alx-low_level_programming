#include "main.h"
/**
 * str_concat - concat two strings
 *@s1: string 1
 *@s2: string 2
 * Return: pointer to concat string
 *
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len1 = 0, len2 = 0;
	char *concat;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != '\0')
			len1++;
		if (s2[i] != '\0')
			len2++;
		i++;
	}
	concat = (char *)malloc(len1 + len2 + 1);
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1 + len2; i++)
	{
		if (s1[i] != '\0')
			concat[i] = s1[i];
		else
		{
			concat[i] = s2[j];
			j++;
		}
	}
	concat[i] = '\0';

	return (concat);
}
