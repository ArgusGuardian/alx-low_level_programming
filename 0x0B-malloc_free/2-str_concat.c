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
	int i = 0, j = 0, k = 0, len1 = 0, len2 = 0;
	char *concat;

	while (s1 && s1[len1] != '\0')
		len1++;
	while (s2 && s2[len2] != '\0')
		len2++;

	concat = (char *)malloc(len1 + len2 + 1);
	if (concat == NULL)
		return (NULL);

	i = j = 0;
	while (k < len1 + len2)
	{
		if (s1 != NULL && s1[i] != '\0')
		{
			concat[k] = s1[i];
			i++;
			k++;
		}
		else if (s2 != NULL && s2[j] != '\0')
		{
			concat[k] = s2[j];
			j++;
			k++;
		}
	}
	concat[k] = '\0';

	return (concat);
}
