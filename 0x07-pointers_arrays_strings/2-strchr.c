#include "main.h"
/**
 * _strchr - function that locates a character in a string
 *@s: pointer to string
 *@c: character
 * Return: return pointer to the memory
 */
char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');
}
