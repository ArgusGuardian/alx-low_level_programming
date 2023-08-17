#include "main.h"

/**
 * print_triangle - print numbers from 1 to 100
 * @size: parameter
 */
void print_triangle(int size)
{
	int i, j, k, a, b;

	a = size - 1;
	b = size - 1;
	for (i = 0; i < size; i++)
	{

		for (j = 0; j < a; j++)
		{
			_putchar(' ');
		}
		a--;
		for (k = b; k < size; k++)
		{
			_putchar('#');
		}
		b--;
		_putchar('\n');
	}
}
