#include "main.h"
/**
 * print_diagsums - function prints sum of 2 diagonals
 * @a: pointer to double array
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;
	int diagonal1 = 0, diagonal2 = 0;

	for (i = 0; i < size * size && diagonal1 <= size; i += size + 1)
	{
		sum1 += a[i];
		diagonal1++;
	}
	for (j = 0; j < size * size && diagonal2 <= size; j += size - 1)
	{
		sum2 += a[j];
		diagonal2++;
	}
	printf("%d, %d\n", sum1, sum2);
}
