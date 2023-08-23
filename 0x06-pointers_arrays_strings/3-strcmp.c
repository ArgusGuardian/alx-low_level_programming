#include "main.h"
/**
 * _strncat - ammend string to another string
 * @src: pointer to string
 * @dest: pointer to string
 * @n: number of characters to ammend
 * Return: pointer to string
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, diff;

	while (s1 != '\0' && s2 != '\0')
		diff = s1[i] - s2[i];

	return diff;
}
