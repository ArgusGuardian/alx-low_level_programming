#include <stdio.h>
/**
 * main - function
 *
 *Return: always 0
 */
int main(void)
{
	int i, j;

	for (j = '0'; j <= '8'; j++)
	{
		for (i = j; i <= '9'; i++)
		{
			if (i == j)
			{
				continue;
			}
			putchar(j);
			putchar(i);
			if (i == '9' && j == '8')
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
