#include <stdio.h>
/**
 * main - Function
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long first = 0, second = 1, sum = 0;
	float sum2 = 0;

	while (1)
	{
		sum = first + second;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			sum2 += sum;
		first = second;
		second = sum;
	}
	printf("%.0f\n", sum2);
	return (0);
}
