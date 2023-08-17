#include "main.h"

/**
 * more_numbers - print numbers
 */
void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			_putchar(j);
		}
		for (k = '0'; k <= '4'; k++)
		{
			_putchar('1');
			_putchar(k);
		}
	}
}
