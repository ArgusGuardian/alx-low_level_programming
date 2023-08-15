#include "main.h"

/**
 * print_times_table - Function
 * Description: return the sum of 2 int
 * @n: parameter
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int mul = i * j;
			int k;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (mul < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (mul < 100)
				_putchar(' ');
			if (mul > 9)
			{
				int count = 0;
				int rev = 0;

				while (mul != 0)
				{
					rev = rev * 10 + mul % 10;
					mul /= 10;
					count++;
				}

				for (k = 0; k < count; k++)
				{
					_putchar(rev % 10 + '0');
					rev /= 10;
				}
			}
			else
			{
				_putchar(mul + '0');
			}
		}
		_putchar('\n');
	}
}