#include "main.h"
/**
 * _abs - Function
 * @c: character to check
 * Description: checks if c is negative and make it positive
 * Return: c if positive
 */
int _abs(int c)
{
	if (c < 0)
	{
		c *= -1;
		return (c);
	}
	return (c);
}
