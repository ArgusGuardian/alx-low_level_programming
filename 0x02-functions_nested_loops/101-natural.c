#include <stdio.h>
/**
 * main - Function
 *
 * Return: always 0
 */
int main(void)
{
	int i = 1, sum1 = 0, sum2 = 0, sum = 0;

	while (3 * i < 1024)
	{
		sum1 += 3 * i;
		i++;
	}
	i = 1;
	while (5 * i < 1024)
	{
		sum2 += 5 * i;
		i++;
	}
	sum = sum1 + sum2;
	printf("%d\n", sum);
	return 0;
}
