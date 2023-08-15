#include <stdio.h>
/**
 * main - Function
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	unsigned long first = 0, second = 1, sum = 0;

	for (i = 0; i < 50; i++)
	{
		sum = first + second;
		printf("%lu", sum);
		first = second;
		second = sum;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
