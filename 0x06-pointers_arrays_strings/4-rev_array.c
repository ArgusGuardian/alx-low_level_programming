#include "main.h"
/**
 * _strncat - ammend string to another string
 * @src: pointer to string
 * @dest: pointer to string
 * @n: number of characters to ammend
 * Return: pointer to string
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
