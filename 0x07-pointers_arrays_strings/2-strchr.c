#include "main.h"
/**
 * _strchr - function that locates a character in a string
 *@s: pointer to string
 *@c: character
 * Return: return pointer to the memory
 */
char *_strchr(char *s, char c)
{
	char *ptr = s;

	while (ptr)
	{
		if (*ptr == c)
			return (ptr);

		ptr++;
	}
	return (NULL);
}
