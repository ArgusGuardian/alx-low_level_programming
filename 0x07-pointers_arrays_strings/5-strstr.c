#include "main.h"
/**
 * _strstr - function that locates a substring
 *@haystack: pointer to string
 *@needle: accecpted string
 * Return: return number of charcter accepted
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int j;
	char *ptr;

	while (*haystack != '\0')
	{
		if (*haystack == needle[0])
		{
			j = 0;
			ptr = haystack;
			while (*ptr == needle[j] && needle[j] != '\0')
			{
				j++;
				ptr++;
			}
			if (needle[j] == '\0')
				return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
