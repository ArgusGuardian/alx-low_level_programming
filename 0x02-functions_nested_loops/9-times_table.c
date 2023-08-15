#include "main.h"
/**
 * jack_bauer - Function
 * Description: prints all the hours and minutes
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int mul;

			mul = i * j;
			if (mul > 9)
			{

				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
				if (j == 9)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(mul + '0');
				if (j == 9)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
			}
		}
		putchar('\n');
	}
}
