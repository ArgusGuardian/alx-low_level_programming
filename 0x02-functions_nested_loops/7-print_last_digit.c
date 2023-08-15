#include "main.h"
/**
 * print_last_digit - Function
 * @c: character to check
 * Description: checks if c is negative and make it positive
 * Return: c if positive
 */
int print_last_digit(int b)
{
	int c;

	if (b < 0)
	{
		c = -1 * (b % 10);
	}
	else
		c = b % 10;
	_putchar(c + '0');
	return (c);
}