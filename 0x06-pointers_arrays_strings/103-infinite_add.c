#include "main.h"
/**
 * infinite_add - adds big numbers
 * @n1: string
 * @n2: string
 * @r: string
 * @size_r: size of r string
 * Return: 0 if k > r, pointer to r if not
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0, sum, change = 0, l;
	char tmp;

	while (n1[i] != '\0')
		i++;
	i--;
	while (n2[j] != '\0')
		j++;
	j--;

	while (i >= 0 || j >= 0)
	{
		sum = ((n1[i] - '0') + (n2[i] - '0') + change);
		change = 0;
		if (sum >= 10)
		{
			sum = sum % 10;
			change = 1;
		}
		r[k] = (sum + '0');

		k++;
		i--;
		j--;
	}
	if (change)
	{
		r[k] = change + '0';
		k++;
	}
	r[k] = '\0';

	if (k >= size_r)
		return (0);
	k--;
	for (l = 0; l < k / 2; l++, k--)
	{
		tmp = r[l];
		r[l] = r[k];
		r[k] = tmp;
	}
	return (r);
}
