#include "main.h"
/**
 * _strpbrk - function that compare 2 string
 *@s: pointer to string
 *@accept: accecpted characters
 * Return: return number of charcter accepted
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (accept[j] == *s)
				return (s);
		s++;
	}
	return (NULL);
}
