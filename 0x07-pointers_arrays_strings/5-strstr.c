#include "main.h"
/**
 * _strstr - function that locates a substring
 *@haystack: pointer to string
 *@needle: accecpted string
 * Return: return number of charcter accepted
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;
	char *ptr;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			ptr = haystack + i;
			while (haystack[i] == needle[j] && needle[j] != '\0')
			{

				j++;
				i++;
			}
			if (!needle)
				return (ptr);
		}
	}
	return (NULL);
}
