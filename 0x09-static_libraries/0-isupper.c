#include "main.h"

/**
 * _isupper - checks if the character is uppercase
 * @c: charcter to check
 * Return: 1 if uppecase and 0 if not
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	return (0);
}
