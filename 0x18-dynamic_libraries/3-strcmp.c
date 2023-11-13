#include "main.h"
/**
 * _strcmp - compare a string to another string
 * @s1: pointer to string
 * @s2: pointer to string
 * Return: difference in ASCII
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && diff == 0)
	{
		diff = s1[i] - s2[i];
		i++;
	}
	return (diff);
}
