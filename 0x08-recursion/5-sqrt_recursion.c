#include "main.h"
/**
 * _sqrt_recursion - return the sqrt of n
 *@n: integer
 *Return: return the sqrt of n
 */
int _sqrt_recursion(int n)
{
	int sqrt;
	if (n < 0)
		return (-1);

	sqrt = _sqrt(n, 1);
	return (sqrt);
}
/**
 * _sqrt - return the sqrt of n
 *@n: integer
 *@y: integer
 *Return: return the sqrt of n
 */
int _sqrt(int n, int y)
{
	int A = 0;

	if (y * y == n)
		return (y);
	if (y > n / 2)
		return (-1);

	A = _sqrt(n, y + 1);
	return (A);
}
