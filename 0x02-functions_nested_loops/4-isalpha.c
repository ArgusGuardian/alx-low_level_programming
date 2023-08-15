#include "main.h"
/**
 * _isalpha - Function
 * @c: character to check
 * Description: checks if c is lowercase or not
 * Return: 1 if c is lowercase 0 if not
 */
int _isalpha(int c)
{
	if (c <= 122 && c >= 97 || c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
