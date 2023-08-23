#include "main.h"
/**
 * print_number - print int using putchar
 * @n: integer
 */
void print_number(int n)
{
	int r;

	if (n < 0)
	{
		n = -n;
		putchar('-');
	}
	r = n % 10;
	if (n / 10 != 0)
		print_number(n / 10);
	putchar(r + '0');
}
