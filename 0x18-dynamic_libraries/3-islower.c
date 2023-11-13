#include "main.h"
/**
 * _islower - Function
 * @c: character to check
 * Description: checks if c is lowercase or not
 * Return: 1 if c is lowercase 0 if not
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
	_putchar('\n');
}
