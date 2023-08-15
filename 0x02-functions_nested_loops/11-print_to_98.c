#include "main.h"

/**
 * print_to_98 - Function
 * Description: return the sum of 2 int
 * @n: parameter
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
		printf("%d", i);
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
		printf("%d", i);
	}
	printf("\n");
}
