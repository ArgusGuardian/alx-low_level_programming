#include <stdio.h>
/**
 * len - calculate the len of string
 * @x: parameter
 *
 * Return: always 0 (Succes)
 */
int len(int x)
{
	int len = 0;

	if (!x)
		return (1);
	while (x)
	{
		x = x / 10;
		len += 1;
	}
	return (len);
}
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int i, p;
	unsigned long first = 1, second = 2, sum = 0;
	unsigned long max = 100000000, Y = 0, X = 0, sum1 = 0;

	for (i = 1; i <= 98; i++)
	{
		if (Y > 0)
			printf("%lu", Y);
		p = len(max) - 1 - len(first);
		while (Y > 0 && p > 0)
		{
			printf("%d", 0);
			p--;
		}
		printf("%lu", first);
		sum = (first + second) % max;
		sum1 = Y + X + (first + second) / max;
		first = second;
		Y = X;
		second = sum;
		X = sum1;
		if (i != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
