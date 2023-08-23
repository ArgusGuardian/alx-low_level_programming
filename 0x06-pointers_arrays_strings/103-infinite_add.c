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
	int i, j, k, sum, carry = 0, l, digit1, digit2;
	char tmp;

	for (i = 0; n1[i]; i++)
		;
	for (j = 0; n2[j]; j++)
		;
	if (i > size_r || j > size_r)
		return (0);

	for (i -= 1, j -= 1, k = 0; k < size_r - 1; i--, j--, k++)
	{
		digit1 = (i >= 0) ? (n1[i] - '0') : 0;
		digit2 = (j >= 0) ? (n2[j] - '0') : 0;

		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		r[k] = (sum % 10) + '0';
	}
	r[k] = '\0';

	if (i >= 0 || j >= 0 || carry)
		return (0);

	for (k -= 1, l = 0; l < k; k--, l++)
	{
		tmp = r[k];
		r[k] = r[l];
		r[l] = tmp;
	}

	return (r);
}
