#include "main.h"
/**
 * print_array - function to reverse a string
 * @a: pointer to a an array
 * @n: number of characters
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n - 1; i++)
		printf("%d, ", a[i]);
	printf("%d\n", a[n - 1]);
}
