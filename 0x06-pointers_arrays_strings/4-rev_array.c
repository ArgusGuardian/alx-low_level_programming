#include "main.h"
/**
 * reverse_array - reverse an int array
 * @a: pointer to int array
 * @n: number of int in array
 */
void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0, j = n - 1; i < n / 2; i++, j--)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
	}
}
