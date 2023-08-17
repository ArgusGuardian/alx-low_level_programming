#include "main.h"

/**
 * print_diagonal - print numbers
 * @n: parameter
 */
void print_diagonal(int n)
{
	int i, x;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			x = i;
			while (x != 0)
			{
				_putchar(' ');
				x--;
			}
		}
		_putchar('\\');
		_putchar('\n');
	}
}
