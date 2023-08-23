#include "main.h"
/**
 * print_number - print int using putchar
 * @n: integer
 */
void print_number(int n)
{
	unsigned int x, r;

	x = n;

	if (n < 0)
	{
		x = -n;
		_putchar('-');
	}
	r = x % 10;
	if (x / 10 != 0)
		print_number(x / 10);
	_putchar(r + '0');
}
