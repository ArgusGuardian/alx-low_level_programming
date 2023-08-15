#include "main.h"
/**
 * print_last_digit - Function
 * @c: character to check
 * Description: checks if c is negative and make it positive
 * Return: c if positive
 */
int print_last_digit(int c)
{
	int last;

	last = c % 10;
	_putchar(last + '0');
	return (last);
}
