#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: pointer to string
 * @needle: accepted string
 * Return: pointer to the beginning of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *haystack_ptr, *needle_ptr;

	if (!*needle)
		return (haystack);

	while (*haystack)
	{
		haystack_ptr = haystack;
		needle_ptr = needle;

		while (*needle_ptr && *haystack_ptr == *needle_ptr)
		{
			haystack_ptr++;
			needle_ptr++;
		}

		if (!*needle_ptr)
			return (haystack);

		haystack++;
	}

	return (NULL);
}
