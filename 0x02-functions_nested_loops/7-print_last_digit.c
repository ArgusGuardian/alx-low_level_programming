#include "main.h"
/**
 * print_last_digit - Function
 * @c: character to check
 * Description: checks if c is negative and make it positive
 * Return: c if positive
 */
int print_last_digit(int c)
{
	if (c < 0)
		c *= -1;
	_putchar((c % 10) + '0');
	return (c % 10);
}
