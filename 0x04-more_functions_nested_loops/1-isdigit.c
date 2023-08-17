#include "main.h"

/**
 * _isdigit - returns the largest of 3 numbers
 * @c: charcter to check
 * Return: 1 if uppecase and 0 if not
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	return (0);
}
