#include <stdio.h>
/**
 * main - function
 *
 *Return: always 0
 */
int main(void)
{
	int j, k;

	for (k = 0; k < 99; k++)
	{
		for (j = k + 1; j < 100; j++)
		{
			putchar(k / 10 + '0');
			putchar(k % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (k == 98 && j == 99)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
