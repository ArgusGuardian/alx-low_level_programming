#include "main.h"
/**
 * print_sign - Function
 * @n: character to check
 * Description: checks if c is negative positive or 0
 * Return: 1 if c is positive 0 if 0 and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
