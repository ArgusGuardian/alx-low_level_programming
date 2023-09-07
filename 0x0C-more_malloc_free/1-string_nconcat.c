#include "main.h"
/**
 * string_nconcat - functinon allocates memory to concat
 *@s1: first string
 *@s2: second string
 *@n: number of chars
 * Return: pointer
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	char *concat;

	if (s1 != NULL)
		while (s1[len1] != '\0')
			len1++;
	if (s2 != NULL)
		while (s2[len2] != '\0')
			len2++;
	if (n >= len2)
		concat = (char *)malloc(len1 + len2 + 1);
	else
		concat = (char *)malloc(len1 + n + 1);
	if (concat == NULL)
		return (NULL);
	while (s1 != NULL && s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2 != NULL && s2[j] != '\0' && n > 0)
	{
		concat[i] = s2[j];
		i++;
		j++;
		n--;
	}
	concat[i] = '\0';
	return (concat);
}
