#include "main.h"
/**
 * _sqrt_recursion - return the sqrt of n
 *@n: integer
 *Return: return the sqrt of n
 */
int _sqrt_recursion(int n)
{
	int sqrt;

	sqrt = _sqrt(n, n / 2);
	return (sqrt);
}
int _sqrt(int n, int y)
{
	int A = 0;

	if (y * y == n)
		return (y);
	if (n == 1)
		return (1);
	if (y == 0)
		return (-1);

	A = _sqrt(n, y - 1);
	return (A);
}
