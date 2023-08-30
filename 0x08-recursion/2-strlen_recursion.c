#include "main.h"
/**
 * _strlen_recursion - returnt the lenght of string
 *@s: pointer to string
 *Return: return the lenght of string
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count += 1 + _strlen_recursion(s + 1);
		return (count);
	}
	return (0);
}
