#include "main.h"

/**
 * times_table - Function
 * Description: prints table of times 9
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int mul = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (mul <= 9 && j != 0)
				_putchar(' ');
			if (mul > 9)
				_putchar((mul / 10) + '0');
			_putchar((mul % 10) + '0');
		}
		_putchar('\n');
	}
}
