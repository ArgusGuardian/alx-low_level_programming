#include "main.h"

/**
 * print_times_table - Function
 * Description: prints n times table with reversed digits for 2+ digit numbers
 * @n: parameter
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int mul = i * j;
			int rev = 0, count = 0;

			if (j != 0)
				putchar(','), putchar(' ');
			if (mul < 10 && j != 0)
				putchar(' '), putchar(' ');
			else if (mul < 100 && j != 0)
				putchar(' ');
			if (mul > 9)
			{
				while (mul != 0)
					rev = rev * 10 + mul % 10, mul /= 10, count++;
				for (k = 0; k < count; k++)
					putchar(rev % 10 + '0'), rev /= 10;
			}
			else
				putchar(mul + '0');
		}
		putchar('\n');
	}
}
