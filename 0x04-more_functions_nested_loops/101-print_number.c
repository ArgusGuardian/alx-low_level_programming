#include "main.h"

/**
 * print_number - print the integers
 * @n: parameter
 */
void print_number(int n)
{
	unsigned int z = n;

	if (n < 0)
	{
		_putchar('-');
		z = -z;
	}
	if (z / 10)
		print_number(z / 10);

	_putchar(z % 10 + '0');
}
