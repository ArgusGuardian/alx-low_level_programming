#include "main.h"
/**
 * print_diagsums - function prints sum of 2 diagonals
 * @a: pointer to double array
 * @size: size of the double arrays
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size * size; i += size + 1)
		sum1 += a[i];
	for (j = size - 1; j <= (size * size) - size; j += size - 1)
		sum2 += a[j];
	printf("%d, %d\n", sum1, sum2);
}
