#include "main.h"
/**
 * _strlen - function to count the length of string
 * @s: pointer to a string
 * Return: returns the lenght of a string
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
