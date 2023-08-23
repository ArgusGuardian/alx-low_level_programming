#include "main.h"
/**
 * infinite_add - function that adds two numbers
 *
 * @n1: first number
 * @n2: second number
 * @r: buffer
 * @size_r: buffer size
 * Return: return pointer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, change, sum;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;

	if (i > size_r || j > size_r)
		return (0);
	change = 0;
	for (i -= 1, j -= 1, k = 0; k < size_r - 1; i--, j--, k++)
	{
		sum = change;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		if (i < 0 && j < 0 && sum == 0)
			break;

		change = sum / 10;
		r[k] = sum % 10 + '0';
	}
	r[k] = '\0';
	if (i >= 0 || j >= 0 || change)
		return (0);
	for (k -= 1, l = 0; l < k; k--, l++)
	{
		change = r[k];
		r[k] = r[l];
		r[l] = change;
	}
	return (r);
}