#include "main.h"

/**
 * print_numbers - print numbers
 */
void print_numbers(void)
{
	char i;
	for (i = '0'; i < '10'; i++)
	{
		if (i == '4' || i == '2')
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
