#include <stdio.h>
/**
 * main - function
 *
 *Return: always 0
 */
int main(void)
{
	char i, j, k;

	for (k = '0'; k < '8'; k++)
	{
		for (j = k + 1; j < '9'; j++)
		{
			for (i = j + 1; i <= '9'; i++)
			{
				putchar(k);
				putchar(j);
				putchar(i);
				if (i == '9' && j == '8' && k == '7')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
