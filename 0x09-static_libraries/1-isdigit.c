#include "main.h"

/**
 * _isdigit - checks if c is a digit
 * @c: charcter to check
 * Return: 1 if digit and 0 if not
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	return (0);
}
