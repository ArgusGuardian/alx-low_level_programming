#include "main.h"

/**
 * print_number - print the integers
 * @n: parameter
 */
void print_number(int n)
{
	int x = 0, alert;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		n = -n;
		alert = 1;
	}

	while (n != 0)
	{
		x = (x * 10) + n % 10;
		n /= 10;
	}

	while (x != 0)
	{
		if (alert == 1)
		{
			_putchar('-');
			alert = 0;
		}
		_putchar(x % 10 + '0');
		x /= 10;
	}
}
